#include "config.h"

#include "ntp_stdlib.h"
#include "ntp_calendar.h"
#include "unity.h"

#include "test-libntp.h"

void setUp(void);
void tearDown(void);
void test_NoWrapInDateRange(void);
void test_NoWrapInDateRangeLeapYear(void);
void test_WrapInDateRange(void);

void setUp(void)
{
    ntpcal_set_timefunc(timefunc);
    settime(1970, 1, 1, 0, 0, 0);
}

void tearDown(void)
{
    ntpcal_set_timefunc(NULL);
}


void test_NoWrapInDateRange(void) {
	const u_int32 input = 3486372600U; // 2010-06-24 12:50:00.
	const u_int32 expected = 3471292800U; // 2010-01-01 00:00:00

	TEST_ASSERT_EQUAL(expected, calyearstart(input, &nowtime));
	TEST_ASSERT_EQUAL(expected, calyearstart(input, NULL));
}

void test_NoWrapInDateRangeLeapYear(void) {
	const u_int32 input = 3549528000U; // 2012-06-24 12:00:00
	const u_int32 expected = 3534364800U; // 2012-01-01 00:00:00

	TEST_ASSERT_EQUAL(expected, calyearstart(input, &nowtime));
	TEST_ASSERT_EQUAL(expected, calyearstart(input, NULL));
}

void test_WrapInDateRange(void) {
	const u_int32 input = 19904U; // 2036-02-07 12:00:00
	const u_int32 expected = 4291747200U; // 2036-01-01 00:00:00

	TEST_ASSERT_EQUAL(expected, calyearstart(input, &nowtime));
	TEST_ASSERT_EQUAL(expected, calyearstart(input, NULL));
}
