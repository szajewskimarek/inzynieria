/**
 * Project Untitled
 */


#include "TBernouli.h"

/**
 * TBernouli implementation
 */


/**
 * @param p
 * @param n
 * @param k
 * @return void
 */
void TBernouli::bernouli(double p, int n, int k) {
    q = 1 - p;
 	P = (pNewton->newton(n, k) * pPower->power(p, k) * pPower->power(q, n - k) );
 	cout <<"\nPrawdopodobieñstwo, ¿e w " <<n<<" doœwiadczeniach "<<k<<"-razy otrzymamy sukces wynosi\n "<<P;
}

TBernouli::TBernouli() {
	cout << "rozpoczyna tworzenie obiektu klasy TNewton\n";
 
 	pNewton = new TNewton;
 
 	cout << "stworzono obiekt pNewton\n";
 	cout << "rozpoczyna tworzenie obiektu klasy TPower\n";
 
 	pPower = new TPower;
 	
 	cout << "stworzono obiekt pPower\n";
}

TBernouli::~TBernouli() {
	cout << "rozpoczyna niszczenie obiektu klasy TNewton\n";
	
 	delete pNewton;
 	
 	cout << "zniszczono obiekt pNewton\n";
 	cout << "rozpoczyna niszczenie obiektu klasy TPower\n";
 	
 	delete pPower;
 	
 	cout << "zniszczono obiekt pPower\n";
}
