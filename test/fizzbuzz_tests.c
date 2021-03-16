#include "..\src\fizzbuzz.h"

#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_fizzbuzz_1(void)
{
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(-5));
}

void test_fizzbuzz_2(void)
{
	TEST_ASSERT_EQUAL_STRING("-2", fizzbuzz_say(-2));
}

void test_fizzbuzz_3(void)
{
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(15));
}

void test_fizzbuzz_4(void)
{
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(45));
}

void test_fizzbuzz_5(void)
{
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(-75));
}

void test_fizzbuzz_6(void)
{
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(0));
}

void test_fizzbuzz_7(void)
{
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(5));
}

void test_fizzbuzz_8(void)
{
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(10));
}

void test_fizzbuzz_9(void)
{
	TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz_say(3));
}

void test_fizzbuzz_10(void)
{
	TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz_say(6));
}

void test_fizzbuzz_11(void)
{
	TEST_ASSERT_EQUAL_STRING("2", fizzbuzz_say(2));
}

void test_fizzbuzz_12(void)
{
	TEST_ASSERT_EQUAL_STRING("11", fizzbuzz_say(11));
}

void test_fizzbuzz_fizz(void){
	TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz_say(4));
	TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz_say(18));
	TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz_say(34));
}

void test_fizzbuzz_buzz(void){
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(7));
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(21));
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(49));
	TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz_say(63));
}

void test_fizzbuzz_fizzbuzz(void){
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(14));
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(28));
	TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz_say(56));
}

void test_fizzbuzz_dizz(void){
	TEST_ASSERT_EQUAL_STRING("Dizz!", fizzbuzz_say(15));
	TEST_ASSERT_EQUAL_STRING("Dizz!", fizzbuzz_say(30));
	TEST_ASSERT_EQUAL_STRING("Dizz!", fizzbuzz_say(45));
	TEST_ASSERT_EQUAL_STRING("Dizz!", fizzbuzz_say(75));
}

void test_fizzbuzz_ruzz(void){
	TEST_ASSERT_EQUAL_STRING("Ruzz", fizzbuzz_say(24));
	TEST_ASSERT_EQUAL_STRING("Ruzz", fizzbuzz_say(48));
	TEST_ASSERT_EQUAL_STRING("Ruzz", fizzbuzz_say(72));
	TEST_ASSERT_EQUAL_STRING("Ruzz", fizzbuzz_say(96));
}

void test_fizzbuzz_numbers(void){
	TEST_ASSERT_EQUAL_STRING("1", fizzbuzz_say(1));
	TEST_ASSERT_EQUAL_STRING("5", fizzbuzz_say(5));
	TEST_ASSERT_EQUAL_STRING("3", fizzbuzz_say(3));
	TEST_ASSERT_EQUAL_STRING("11", fizzbuzz_say(11));
}

int main(int argc, char **argv)
{
	UNITY_BEGIN();

	RUN_TEST(test_fizzbuzz_1);
	RUN_TEST(test_fizzbuzz_2);
	RUN_TEST(test_fizzbuzz_3);
	RUN_TEST(test_fizzbuzz_4);
	RUN_TEST(test_fizzbuzz_5);
	RUN_TEST(test_fizzbuzz_6);
	RUN_TEST(test_fizzbuzz_7);
	RUN_TEST(test_fizzbuzz_8);
	RUN_TEST(test_fizzbuzz_9);
	RUN_TEST(test_fizzbuzz_10);
	RUN_TEST(test_fizzbuzz_11);
	RUN_TEST(test_fizzbuzz_12);
	RUN_TEST(test_fizzbuzz_fizz);
	RUN_TEST(test_fizzbuzz_buzz);
	RUN_TEST(test_fizzbuzz_fizzbuzz);
	RUN_TEST(test_fizzbuzz_dizz);
	RUN_TEST(test_fizzbuzz_ruzz);
	RUN_TEST(test_fizzbuzz_numbers);

	return UNITY_END();
}
