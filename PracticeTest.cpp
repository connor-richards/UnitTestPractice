/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_large_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_large_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("thisisnotasiht");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_spaced_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("race car");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_onechar_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, reverse_sort)
{
    Practice obj;
    int first = 1;
    int second = 2;
    int third = 3;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}

TEST(PracticeTest, in_order_sort)
{
    Practice obj;
    int first = 3;
    int second = 2;
    int third = 1;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}

TEST(PracticeTest, third_second_sort)
{
    Practice obj;
    int first = 3;
    int second = 1;
    int third = 2;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}

TEST(PracticeTest, second_first_sort)
{
    Practice obj;
    int first = 2;
    int second = 3;
    int third = 1;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}

TEST(PracticeTest, third_first_sort)
{
    Practice obj;
    int first = 1;
    int second = 3;
    int third = 2;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}

TEST(PracticeTest, first_third_sort)
{
    Practice obj;
    int first = 2;
    int second = 1;
    int third = 3;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 2 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}

TEST(PracticeTest, all_same_sort)
{
    Practice obj;
    int first = 1;
    int second = 1;
    int third = 1;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 1 && second == 1 && third == 1) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}

TEST(PracticeTest, negative_sort)
{
    Practice obj;
    int first = -1;
    int second = -2;
    int third = -3;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == -1 && second == -2 && third == -3) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}

TEST(PracticeTest, some_negative_sort)
{
    Practice obj;
    int first = 1;
    int second = -2;
    int third = 3;
    bool passed = false;
    obj.sortDescending(first , second, third);
    if(first == 3 && second == 1 && third == -2) {
      passed = true;
    }
    ASSERT_TRUE(passed);
}
