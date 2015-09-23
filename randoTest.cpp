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


TEST(RandoTest, smallDivByLarger)
{
	Rando rando;
	ASSERT_FALSE(rando.isDivisbleBy(3, 4));
}
TEST(RandoTest, largeDivBySmaller)
{
	Rando rando;
	ASSERT_FALSE(rando.isDivisbleBy(43, 6));
}
TEST(RandoTest, shouldDivide)
{
	Rando rando;
	ASSERT_TRUE(rando.isDivisbleBy(10, 5));
}
TEST(RandoTest, smallPrimeNumber)
{
	Rando rando;
	ASSERT_TRUE(rando.isPrime(7));
}
TEST(RandoTest, largePrimeNumber)
{
	Rando rando;
	ASSERT_TRUE(rando.isPrime(982451653));
}
TEST(RandoTest, smallNotPrime)
{
	Rando rando;
	ASSERT_FALSE(rando.isPrime(12));
}
TEST(RandoTest, largeNotPrime)
{
	Rando rando;
	ASSERT_FALSE(rando.isPrime(982451652));
}
TEST(RandoTest, aOverB)
{
	Rando rando;
	ASSERT_EQ(5,rando.nearestToZero(5,3));
}
TEST(RandoTest, bOverA)
{
	Rando rando;
	ASSERT_EQ(5,rando.nearestToZero(3,5));
}
TEST(RandoTest, bIsZero)
{
	Rando rando;
	ASSERT_EQ(5,rando.nearestToZero(5,0));
}
TEST(RandoTest, aIsZero)
{
	Rando rando;
	ASSERT_EQ(3,rando.nearestToZero(0,3));
}
TEST(RandoTest, aEqualsB)
{
	Rando rando;
	ASSERT_EQ(5,rando.nearestToZero(5,5));
}
TEST(RandoTest, largerNegative)
{
	Rando rando;
	ASSERT_EQ(5,rando.nearestToZero(-5,3));
}
TEST(RandoTest, largerPositive)
{
	Rando rando;
	ASSERT_EQ(5,rando.nearestToZero(5,-3));
}

