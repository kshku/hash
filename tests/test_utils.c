#include "unity.h"
#include "../src/utils.h"

void setUp(void) {
}

void tearDown(void) {
}

void test_char_in_string(void) {
    TEST_ASSERT_TRUE(char_in_string('?', "*(#$%?(9345kdsjfkj"));
    TEST_ASSERT_FALSE(char_in_string('a', "*(#$%?(9345kdsjfkj"));
    TEST_ASSERT_TRUE(char_in_string('\0', "\0slkfj"));
    TEST_ASSERT_FALSE(char_in_string('\0', "sldkfj\0"));
    TEST_ASSERT_FALSE(char_in_string('s', "fdj\0skldj"));
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_char_in_string);

    return UNITY_END();
}
