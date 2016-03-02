/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, twoChildrenSmile)
{
	Rando rando;
	ASSERT_FALSE( rando.shouldWorry(true, true, false) );
}

TEST(RandoTest, firstChildSmiles)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true, false, false) );
}

TEST(RandoTest, secondChildSmiles)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(false, true, false) );
}

TEST(RandoTest, thirdChildSmiles)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(false, false, true) );
}

TEST(RandoTest, noChildSmiles)
{
	Rando rando;
	ASSERT_FALSE( rando.shouldWorry(false, false, false) );
}

TEST(RandoTest, isDivbyZero)
{
	Rando rando;
	bool caught = false;
	try
	{
		rando.isDivisibleBy(4,0);
	}
	catch(int err)
	{
		caught = true;
	}
	ASSERT_TRUE(caught);
}

TEST(RandoTest, isDivbySameValue)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisibleBy(13,13) );
}

TEST(RandoTest, isDivbyZeroFirst)
{
	Rando rando;
	bool caught = false;
	try
	{
		rando.isDivisibleBy(0,9);
	}
	catch(int err)
	{
		caught = true;
	}
	ASSERT_TRUE(caught);
}

TEST(RandoTest, isDivbyNegative)
{
	Rando rando;
	ASSERT_FALSE( rando.isDivisibleBy(-10,-20) );
}

TEST(RandoTest, handleDivByZero)
{
	Rando rando;
	bool caught = false;
	try
	{
		rando.isDivisibleBy(0,0);
	}
	catch(int err)
	{
		caught = true;
	}
	ASSERT_TRUE(caught);
}
