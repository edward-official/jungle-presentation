#include "unity.h"
#include "calculator.h"
void setUp(void) {}
void tearDown(void) {}


void test_addition(void) {
  TEST_ASSERT_EQUAL(5, add(2, 3));
  TEST_ASSERT_EQUAL(0, add(-3, 3));
  TEST_ASSERT_EQUAL(-7, add(-3, -4));
}
void test_subtraction(void) {
  TEST_ASSERT_EQUAL(-1, subtract(2, 3));
  TEST_ASSERT_EQUAL(-6, subtract(-3, 3));
  TEST_ASSERT_EQUAL(1, subtract(-3, -4));
}


int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_addition);
  RUN_TEST(test_subtraction);
  return UNITY_END();
}
