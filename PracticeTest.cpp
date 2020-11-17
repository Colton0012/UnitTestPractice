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

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome_symbols)
{
    Practice obj;
    bool actual = obj.isPalindrome("!!!!z!!!!");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome_blank)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_simple_palindrome_close_words)
{
    Practice obj;
    bool actual = obj.isPalindrome("teststet");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome_even_words)
{
    Practice obj;
    bool actual = obj.isPalindrome("LoOl");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_descending)
{
    Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
	bool actual;
    obj.sortDescending(first, second, third);
	if (first >= second && second >= third)
	{
		actual = true;
	}else
	{
		actual = false;
	}
	ASSERT_TRUE(actual);    
}

TEST(PracticeTest, is_descending_blank_inputs)
{
    Practice obj;
	int first;
	int second;
	int third ;
	bool actual;
    obj.sortDescending(first, second, third);
	if (first >= second && second >= third)
	{
		actual = true;
	}else
	{
		actual = false;
	}
	ASSERT_TRUE(actual);    
}

TEST(PracticeTest, is_descending_with_repeat)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 2;
	bool actual;
    obj.sortDescending(first, second, third);
	if (first >= second && second >= third)
	{
		actual = true;
	}else
	{
		actual = false;
	}
	ASSERT_TRUE(actual);    
}

TEST(PracticeTest, is_descending_with_first_larger)
{
    Practice obj;
	int first = 4;
	int second = 1;
	int third = 2;
	bool actual;
    obj.sortDescending(first, second, third);
	if (first >= second && second >= third)
	{
		actual = true;
	}else
	{
		actual = false;
	}
	ASSERT_TRUE(actual);    
}

TEST(PracticeTest, is_descending_with_second_larger)
{
    Practice obj;
	int first = 4;
	int second = 5;
	int third = 2;
	bool actual;
    obj.sortDescending(first, second, third);
	if (first >= second && second >= third)
	{
		actual = true;
	}else
	{
		actual = false;
	}
	ASSERT_TRUE(actual);    
}

TEST(PracticeTest, is_descending_already)
{
    Practice obj;
	int first = 100;
	int second = 9;
	int third = 1;
	bool actual;
    obj.sortDescending(first, second, third);
	if (first >= second && second >= third)
	{
		actual = true;
	}else
	{
		actual = false;
	}
	ASSERT_TRUE(actual);    
}

TEST(PracticeTest, is_descending_with_negative)
{
    Practice obj;
	int first = -1;
	int second = 0;
	int third = -9;
	bool actual;
    obj.sortDescending(first, second, third);
	if (first >= second && second >= third)
	{
		actual = true;
	}else
	{
		actual = false;
	}
	ASSERT_TRUE(actual);    
}