#include"functions.h"
#include <iostream>
#include <conio.h>
void main()
{
	setlocale(LC_ALL, "Ukrainian");
	int N;
	cout << "¬ведiть число: ";
	cin >> N;
	CELL*ptrHead = formPrimaryList(N);
	applyEratosphen(ptrHead, N);		
	printList(ptrHead);						
	deleteList(ptrHead);	
	_getch();
}