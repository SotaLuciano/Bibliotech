#include <iostream> 
#include "function.h"
#include <conio.h>

using namespace std;

void main() 
{ 
	setlocale(LC_ALL, "Ukrainian");
int Number, System; 
cout<<"����i�� ����� ��� ������ ����������: "; 
cin >> Number;
cout << "����i�� ������� ��������: ";
cin >> System;
cout << Number << " � " << System << "-i� ������i = "; 
binarysist(Number,System); 
_getch();
} 
