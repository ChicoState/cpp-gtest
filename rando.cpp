//Author: Kevin Buffardi
#include "rando.h"
#include <string>
#include <vector>

/**
 * Determines if either first or second parameter is evenly 
 * divisible by the other.
**/
bool Rando::isDivisibleBy(int first, int second)
{

	return true;
}

/**
 * Determines, without case sensitivity, whether the parameter is
 * if read either backwards (right-to-left) or forwards (left-to-right)
**/
bool Rando::isPalindrome(std::string eval)
{

	return true;
}

/**
 * Returns the digit {0...9} that occurs the most often within the parameter
 * or returns -1 if there is no single digit that occurs more often than all
 * the others
**/
int Rando::mostPopularDigit(unsigned int num)
{
    int most = 0;
    int popular = -1;
    int current;
    std::vector <int> digitCount(10,0);

    while( num > 9 )
    {
      current = num%10;
      digitCount[current]++;
      num = num/10;
    }

    digitCount[num]++;

    for(int i=0; i<digitCount.size(); i++)
    {
      if( digitCount[i] > most )
      {
        most = digitCount[i];
        popular = i;
      }
    }

    return popular;
}













