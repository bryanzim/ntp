#include "config.h"

#include "ntp_stdlib.h"
#include "ntp_fp.h"

#include "unity.h"

void setUp(void);
void test_Address(void);
void test_Netmask(void);


void
setUp(void)
{
	init_lib();

	return;
}


void
test_Address(void) {
	const u_int32 input = htonl(3221225472U + 512U + 1U); // 192.0.2.1

	TEST_ASSERT_EQUAL_STRING("192.0.2.1", numtoa(input));
}

void
test_Netmask(void) {
	// 255.255.255.0
	const u_int32 hostOrder = 255U*256U*256U*256U + 255U*256U*256U + 255U*256U;
	const u_int32 input = htonl(hostOrder);

	TEST_ASSERT_EQUAL_STRING("255.255.255.0", numtoa(input));
}
