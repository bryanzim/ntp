
#include "config.h"
#include "sntptest.h"

void
sntptest(void) {
	optionSaveState(&sntpOptions);
}


void
sntptest_destroy(void) {
	optionRestore(&sntpOptions);
}


void
ActivateOption(const char* option, const char* argument) {

	const int ARGV_SIZE = 4;

	char* opts[ARGV_SIZE];
	
	opts[0U] = estrdup("sntpopts");
	opts[1U] = estrdup(option);
	opts[2U] = estrdup(argument);
	opts[3U] = estrdup("127.0.0.1");

	optionProcess(&sntpOptions, COUNTOF(opts), opts);
}

