#include "rando.h"
#include <string>

/**
 * Determines if either first or second parameter is evenly 
 * divisible by the other.
**/
bool Rando::isDivisibleBy(int first, int second)
{
	if( first == 0 || second == 0)
	{
		return first!=second;
	}
	else
		return first % second == 0 || second % first == 0;
}

/**
 * Determines, without case sensitivity, whether the parameter is the same
 * if read either backwards (right-to-left) or forwards (left-to-right)
**/
bool Rando::isPalindrome(std::string eval)
{
	for(unsigned int i=0; i < eval.length()/2; i++)
	{
		if( eval[i] != eval[eval.length()-i-1] )
			return false;
	}
	return true;
}

/**
 * Returns the digit {0...9} that occurs the most often within the parameter
 * or returns -1 if there is no single digit that occurs more often than all
 * the others
**/
int Rando::mostPopularDigit(unsigned int num)
{
	int count[10] = {0,0,0,0,0,0,0,0,0,0};
	
	while( num > 0 )
	{
		int x = num % 10;
		num = num/10;
		count[x]++;
	}

	int popular = -1;
	int most = 0;
	for(int i=0; i<10; i++)
	{
		if( count[i] > most )
		{
			popular = i;
			most = count[i];
		}
		else if( count[i] == most )
		{	
			popular = -1;
		}
	}
	return popular;
}
