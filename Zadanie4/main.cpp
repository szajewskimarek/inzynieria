#include <iostream>
#include "TBernouli.cpp"
#include "TFactorial.cpp"
#include "TNewton.cpp"
#include "TPower.cpp"
#include <string>
using namespace std;



	
int main()
{
 	double p;
 	int n, k;
 	
 	cout << "Podaj p: ";
 	cin >> p;
 	cout << "\nPodaj n: ";
 	cin >> n;
 	cout << "\nPodaj k: ";
 	cin >>k;
 	
 	if(p>1 || p<0 || n<0 || k<0 || k>n) {
 		cout << "Nieprawid³owe dane wejœciowe!";
 		system("PAUSE");
 		return 1;
 	}
 	else {
 		cout<<"rozpoczyna tworzenie obiektu klasy TBernouli\n";
 		
 		TBernouli *pBernouli = new TBernouli;
 		cout << "stworzono obiekt pBernouli\n";
 		pBernouli->bernouli(p, n, k);
 		cout << endl;
 		cout<<"rozpoczyna niszczenie obiektu klasy TBernouli\n";
 		
 		delete pBernouli;
 		cout << "zniszczono obiekt pBernouli\n";
 	}
 	
 	system("PAUSE");
 	return 0;
}


