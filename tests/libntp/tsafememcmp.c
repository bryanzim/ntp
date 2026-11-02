#include "config.h"

#include "isc/string.h"
#include "ntp_stdlib.h"
#include "unity.h"

/* Basisc test for timingsafe_memcmp() */

void test_Empty(void);
void test_Equal(void);
void test_FirstByte(void);
void test_LastByte(void);
void test_MiddleByte(void);
void test_MiddleByteUpLo(void);

void test_Empty(void)
{
    static const char dummy[1U];
    TEST_ASSERT_EQUAL_INT(0, isc_tsmemcmp(NULL, NULL, 0));
    TEST_ASSERT_EQUAL_INT(0, isc_tsmemcmp(dummy, dummy, 0));
}

void test_Equal(void)
{
    static const char dummy[2U][4U] = {
        "blob", "blob"
    };
    TEST_ASSERT_EQUAL_INT(0, isc_tsmemcmp(dummy[0U],
                                          dummy[1U],
                                          sizeof(dummy[0U])));
}

void test_FirstByte(void)
{
    static const char dummy[2U][4U] = {
        "Blob", "Clob"
    };
    TEST_ASSERT_EQUAL_INT(-1, isc_tsmemcmp(dummy[0U],
                                           dummy[1U],
                                           sizeof(dummy[0U])));
    TEST_ASSERT_EQUAL_INT(1, isc_tsmemcmp(dummy[1U],
                                          dummy[0U],
                                          sizeof(dummy[0U])));
}

void test_LastByte(void)
{
    static const char dummy[2U][4U] = {
        "Blob", "Bloc"
    };
    TEST_ASSERT_EQUAL_INT(-1, isc_tsmemcmp(dummy[0U],
                                           dummy[1U],
                                           sizeof(dummy[0U])));
    TEST_ASSERT_EQUAL_INT(1, isc_tsmemcmp(dummy[1U],
                                          dummy[0U],
                                          sizeof(dummy[0U])));
}

void test_MiddleByte(void)
{
    static const char dummy[2U][4U] = {
        "Blob", "Blpb"
    };
    TEST_ASSERT_EQUAL_INT(-1, isc_tsmemcmp(dummy[0U],
                                           dummy[1U],
                                           sizeof(dummy[0U])));
    TEST_ASSERT_EQUAL_INT(1, isc_tsmemcmp(dummy[1U],
                                          dummy[0U],
                                          sizeof(dummy[0U])));
}

void test_MiddleByteUpLo(void)
{
    static const char dummy[2U][4U] = {
        "Blob", "Blpa"
    };
    TEST_ASSERT_EQUAL_INT(-1, isc_tsmemcmp(dummy[0U],
                                           dummy[1U],
                                           sizeof(dummy[0U])));
    TEST_ASSERT_EQUAL_INT(1, isc_tsmemcmp(dummy[1U],
                                          dummy[0U],
                                          sizeof(dummy[0U])));
}
