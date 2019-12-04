/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WITHIN RANDO CLASS:

	bool isDivisibleBy(int,int);
		
	bool isPalindrome(string);

	unsigned int mostPopularDigit(unsigned int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, sanityCheck)
{
	Rando rando;
	ASSERT_TRUE( true );
}

TEST(RandoTest, mostPopularZero)
{
    Rando rando;
    int actual = rando.mostPopularDigit(0);
    ASSERT_EQ( actual, 0 );
}

TEST(RandoTest, mostPopularOneThreeTimes)
{
    Rando rando;
    int actual = rando.mostPopularDigit(31311);
    ASSERT_EQ( actual, 1 );
}

TEST(RandoTest, mostPopularAllTwos)
{
    Rando rando;
    int actual = rando.mostPopularDigit(222);
    ASSERT_EQ( actual, 2 );
}


