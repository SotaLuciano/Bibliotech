#include <iostream>
#include <conio.h>
#include "functions.h"
using namespace std;

void main()
{	
	setlocale(LC_ALL, "Ukrainian");
	cout << "\n Enter integer number: ";
	int number;
	cin >> number;
	LIST* ptrHead = new LIST;	
	AddNumberToStek(ptrHead, number);
	_getch();
}
