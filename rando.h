#ifndef RANDO_H
#define RANDO_H
#include <string>

class Rando
{
	public:
		/**
 		 * Determines if either first or second parameter is evenly 
 		 * divisible by the other.
		**/
		bool isDivisibleBy(int,int);
		
		/**
 		 * Determines, without case sensitivity, whether the parameter is
 		 * if read either backwards (right-to-left) or forwards (left-to-right)
  		**/
		bool isPalindrome(std::string);

		/**
 		 * Returns the digit {0...9} that occurs the most often within the parameter
 		 * or returns -1 if there is no single digit that occurs more often than all
 		 * the others
		**/
		unsigned int mostPopularDigit(unsigned int);
};

#endif