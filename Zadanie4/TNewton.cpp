/**
 * Project Untitled
 */


#include "TNewton.h"

/**
 * TNewton implementation
 */


/**
 * @param n
 * @param k
 * @return long double
 */
long double TNewton::newton(int n, int k) {
	
	N = n - k;
 	long NbyK = 1;
 	
 	if(k >= N) {
 		for(int i = k+1; i <= n; i++)
		NbyK *= i;
		return (NbyK/pFactorial->factorial(n - k));
 	}
 	else {
 		for(int i = N+1; i <= n; i++)
		NbyK *= i;
		return (NbyK / pFactorial->factorial(k));
 	}

}

TNewton::TNewton() {
	cout << "rozpoczyna tworzenie obiektu klasy TFactorial\n";
 	
 	pFactorial = new TFactorial;
 	
 	cout << "stworzono obiekt pFactorial\n";
}

TNewton::~TNewton() {
	cout << "rozpoczyna niszczenie obiektu klasy TFactorial\n";
 	
 	delete pFactorial;
 	
 	cout << "zniszczono obiekt pFactorial\n";
}
