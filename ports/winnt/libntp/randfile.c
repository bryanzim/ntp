/*
 * Make sure that there is a good source of random characters
 * so that OpenSSL can work properly and securely.
 */

#include <config.h>
#include <wincrypt.h>

#include <stdio.h>
#include <string.h>

unsigned int	getrandom_chars(int desired, unsigned char *buf, int lenbuf);
BOOL		create_random_file(char *filename);
static BOOL	ensure_parent_dir(char *filepath);

BOOL
init_randfile()
{
	FILE *rf;
	char *randfile;
	char *homedir;
	char *progdata_env;
	char tmp[MAX_PATH + 16];
	char progdata[MAX_PATH];
	DWORD n;

	/* See if the environmental variable RANDFILE is defined
	 * and the file exists
	 */
	randfile = getenv("RANDFILE");
	if (randfile != NULL) {
		rf = fopen(randfile, "rb");
		if (rf != NULL) {
			fclose(rf);
			return (TRUE);
		}
		else {
			/* The environmental variable exists but not the file */
			return (create_random_file(randfile));
		}
	}
	/*
	 * If the RANDFILE environmental variable does not exist,
	 * see if the HOME enviromental variable exists and
	 * a .rnd file is in there.
	 */
	homedir = getenv("HOME");
	if (homedir != NULL &&
	    (strlen(homedir) + 5 /* \.rnd */) < sizeof(tmp)) {
		snprintf(tmp, sizeof(tmp), "%s\\.rnd", homedir);
		rf = fopen(tmp, "rb");
		if (rf != NULL) {
			fclose(rf);
			return (TRUE);
		}
		else {
			/* The HOME environmental variable exists but not the file */
			return (create_random_file(tmp));
		}
	}
	/*
	 * Prefer %ProgramData%\NTP\.rnd over the insecure historical
	 * fallback of C:\.rnd. Fail closed if this path cannot be used.
	 */
	progdata_env = getenv("ProgramData");
	if (progdata_env != NULL) {
		strncpy(progdata, progdata_env, sizeof(progdata) - 1);
		progdata[sizeof(progdata) - 1] = '\0';
	} else {
		n = GetEnvironmentVariableA("ProgramData", progdata,
					    sizeof(progdata));
		if (n == 0 || n >= sizeof(progdata))
			return (FALSE);
	}
	if ((strlen(progdata) + sizeof("\\NTP\\.rnd")) > sizeof(tmp))
		return (FALSE);
	snprintf(tmp, sizeof(tmp), "%s\\NTP\\.rnd", progdata);
	rf = fopen(tmp, "rb");
	if (rf != NULL) {
		fclose(rf);
		return (TRUE);
	}
	return (create_random_file(tmp));
}
/*
 * Routine to create the random file with 1024 random characters
 */
BOOL
create_random_file(char *filename) {
	FILE *rf;
	int nchars;
	unsigned char buf[1025];

	if (!ensure_parent_dir(filename))
		return (FALSE);

	nchars = getrandom_chars(1024, buf, sizeof(buf));
	rf = fopen(filename, "wb");
	if (rf == NULL)
		return (FALSE);
	fwrite(buf, sizeof(unsigned char), nchars, rf);
	fclose(rf);
	return (TRUE);
}

/*
 * Create parent directory for filepath if needed (one level only for
 * ...\NTP\.rnd). Returns TRUE if the parent exists or was created.
 */
static BOOL
ensure_parent_dir(char *filepath)
{
	char dir[MAX_PATH];
	char *slash;
	size_t len;

	if (filepath == NULL)
		return (FALSE);
	len = strlen(filepath);
	if (len == 0 || len >= sizeof(dir))
		return (FALSE);
	memcpy(dir, filepath, len + 1);
	slash = strrchr(dir, '\\');
	if (slash == NULL)
		slash = strrchr(dir, '/');
	if (slash == NULL)
		return (TRUE);
	*slash = '\0';
	if (dir[0] == '\0')
		return (TRUE);
	if (CreateDirectoryA(dir, NULL) || GetLastError() == ERROR_ALREADY_EXISTS)
		return (TRUE);
	return (FALSE);
}

unsigned int
getrandom_chars(int desired, unsigned char *buf, int lenbuf) {
	HCRYPTPROV hcryptprov;
	BOOL err;

	if (buf == NULL || lenbuf <= 0 || desired > lenbuf)
		return (0);
	/*
	 * The first time we just try to acquire the context
	 */
	err = CryptAcquireContext(&hcryptprov, NULL, NULL, PROV_RSA_FULL,
				  CRYPT_VERIFYCONTEXT);
	if (!err){
		return (0);
	}
	if (!CryptGenRandom(hcryptprov, desired, buf)) {
		CryptReleaseContext(hcryptprov, 0);
		return (0);
	}

	CryptReleaseContext(hcryptprov, 0);
	return (desired);
}
