#include "functions.h"
const int INT_TO_START = 2;
#pragma region Functions
CELL* formPrimaryList(int n)
{
	CELL* ptrHead = new CELL;
	ptrHead->data = INT_TO_START;
	ptrHead->ptr = NULL;
	CELL* ptrHelp = ptrHead, *ptrLast = ptrHead;
	for (int k = INT_TO_START; (2*k)-1 < n; k++)
	{
		ptrHelp = new CELL;
		ptrHelp->data =(2*k)-1;
		ptrHelp->ptr = NULL;
		ptrLast->ptr = ptrHelp;
		ptrLast = ptrHelp;
	}
	return ptrHead;
}

void printList(CELL* ptr)
{
	CELL*ptrHead = ptr;
	while (ptr != NULL)
	{
		cout << ptr->data << "\t";
		ptr = ptr->ptr;
		ptrHead->ptr = NULL;
		ptrHead = ptr;
	}
	deleteList(ptrHead);
}

void deleteList(CELL* ptr)
{
	CELL* ptrHelp = ptr;
	for (; ptr;)
	{
		ptrHelp = ptr->ptr;
		ptr->ptr = NULL;
		delete ptr;
		ptr = ptrHelp;
	}
}

void applyEratosphen(CELL*  ptrHead, int n)
{
	CELL* ptrHelp = ptrHead, *ptrTemp = ptrHead;
	for (int primenumber = ptrHelp->data; ptrHelp && primenumber*primenumber < n; ptrHelp = ptrHelp->ptr, primenumber = ptrHelp->data)
	{
		CELL* ptrBefore = ptrTemp;
		for (ptrTemp = ptrHelp->ptr; ptrTemp; ptrTemp = ptrTemp->ptr)
		{
			if (!(ptrTemp->data % primenumber))
			{
				removeCELL(ptrTemp, ptrBefore);
			}
			else
				ptrBefore = ptrTemp;	
		}
	}
}

void removeCELL(CELL*& ptrToDate, CELL* ptrLastBeforeTerget)
{
	ptrLastBeforeTerget->ptr = ptrToDate->ptr;
	ptrToDate->ptr = NULL;
	delete ptrToDate;
	ptrToDate = ptrLastBeforeTerget;
}
//By Nazar
#pragma endregion