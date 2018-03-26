/**
 * Project Untitled
 */

#include <iostream>
#pragma hdrstop
#ifndef _TNEWTON_H
#define _TNEWTON_H

using namespace std;

class TNewton {
private:
	int N;
    TFactorial *pFactorial;
	
public: 
    TNewton();
    ~TNewton();
    long double newton(int n, int k);
};

#endif //_TNEWTON_H
