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


TEST(PracticeTest, multi_word_palindrome)
{
    Practice obj;
    // Spaces are ignored in "ordinary" palindromes but not in "strict" ones.
    // A "strict" palindrome (spaces count)
    bool actual = obj.isPalindrome("Able was I ere I saw Elba");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, multi_word_not_palindrome)
{
    Practice obj;
    // Spaces are ignored in "ordinary" palindromes but not in "strict" ones.
    // An "ordinary" palindrome (spaces are ignored)
    // The description of Practice::isPalindrome() says that it checks if the input string
    // is strictly a palindrome, but disregarding case.
    bool actual = obj.isPalindrome("A man a plan a canal Panama");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, dashed_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a-b-c-b-a");
    ASSERT_TRUE(actual);
}



/* Sad tests for
 * Practice::isPalindrome(string input)
 */


TEST(PracticeTest, abcdedxba_not_palindrome)
{
    Practice obj;
    // A very simple sad test.
    // Palindrome except for one character
    bool actual = obj.isPalindrome("abcdedxba");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, special_chars_1_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(">^");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, special_chars_2_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("@`");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, special_chars_3_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("\x2Γ");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, special_chars_4_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("\x7τ");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, null_in_the_middle_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("abc\0cba");
    ASSERT_TRUE(actual);
}
