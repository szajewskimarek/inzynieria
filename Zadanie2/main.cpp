#include <iostream>
#include <string>
#include "TStudent.cpp"
#include "TUniversity.cpp"


using namespace std;


int main(){
	
 TUniversity *ptrUniversity = new TUniversity("Maria Curie Sklodowska University");
 ptrUniversity->setData("Jan Kowalski", 21);
 ptrUniversity->printData();
 delete ptrUniversity;
 cin.get();
 return 0;
}
