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


/* Happy tests for
 * Practice::isPalindrome(string input)
 */

TEST(PracticeTest, aa_is_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, Ba_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Ba");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, Bab_is_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Bab");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, Kayak_is_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Kayak");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, Moon_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Moon");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, b1100110011_is_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("1100110011");
    ASSERT_TRUE(actual);
}
