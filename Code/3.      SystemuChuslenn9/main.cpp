#include <iostream> 
#include "function.h"
#include <conio.h>

using namespace std;

void main() 
{ 
	setlocale(LC_ALL, "Ukrainian");
int Number, System; 
cout<<"¬ведiть число €ке будете переводити: "; 
cin >> Number;
cout << "¬ведiть систему численн€: ";
cin >> System;
cout << Number << " в " << System << "-iй системi = "; 
binarysist(Number,System); 
_getch();
} 
