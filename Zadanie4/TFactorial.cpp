/**
 * Project Untitled
 */


#include "TFactorial.h"

/**
 * TFactorial implementation
 */


/**
 * @param n
 * @return long double
 */
long double TFactorial::factorial(int n) {
    if(n == 0)
 	return 1;
 	
 	return n * factorial(n - 1);
}
