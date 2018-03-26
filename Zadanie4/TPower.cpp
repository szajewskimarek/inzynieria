/**
 * Project Untitled
 */


#include "TPower.h"

/**
 * TPower implementation
 */


/**
 * @param n
 * @param m
 * @return double
 */
double TPower::power(double n, int m) {
    if(m == 0)
 	return 1;
 	
 	return n * power(n, m - 1);
}
