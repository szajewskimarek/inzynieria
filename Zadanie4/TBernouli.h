/**
 * Project Untitled
 */

#include <iostream>
#pragma hdrstop
#ifndef _TBERNOULI_H
#define _TBERNOULI_H

using namespace std;

class TBernouli {

private: 
    double q;
    long double P;
    TPower *pPower;
    TNewton *pNewton;
    
    
public: 
    void bernouli(double p, int n, int k);
    TBernouli();
    ~TBernouli();
};

#endif //_TBERNOULI_H
