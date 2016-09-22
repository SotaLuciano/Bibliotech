#include <iostream>
#include "functions.h"
using namespace std;
void AddNumberToStek( LIST* ptrHead, const int tsyfra)
{
	int tempNumber;
	tempNumber = tsyfra;
	LIST* ptrHelp = new LIST;
	(*ptrHead).key = tempNumber % 10;
	tempNumber /= 10;
	ptrHead->ptr = NULL;
	ptrHelp = ptrHead;
	
	while (tempNumber)
	{
		ptrHead = new LIST;
		
		ptrHead->key = tempNumber % 10;
		ptrHead->ptr = ptrHelp;
		
		ptrHelp = ptrHead;
		
		tempNumber /= 10;
	}
	while (ptrHelp != NULL)
	{
		cout << ptrHelp->key;

		ptrHelp = ptrHelp->ptr;
		
		ptrHead->ptr = NULL;
		delete ptrHead;
		
		ptrHead = ptrHelp;
	}
	cout << endl;
}
//By Nazar