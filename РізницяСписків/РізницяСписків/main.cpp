#include <iostream>
#include <conio.h>
#include "h.h"

using namespace std;

void main()
{
	List * list_A = new List;
	List * list_B = new List;
	List * list_C = new List;
	int A;
	cout << "Enter 1 number A: ";
	cin >> A;
	list_A->a.key = A;
	list_A->next = NULL;

	List* end_A = list_A;
	List* end_B = list_B;
	for(int i(1); i<5; i++)
	{
	cout << "Enter" << i << "number of A: ";
	cin >> A;
	end_A->next = new List;
	end_A = end_A->next;
	end_A->a.key = A;
	end_A->next = NULL;
	}
	cout << "Enter 1 number B: ";
	cin >> A;
	list_B->a.key = A;
	list_B->next = NULL;
	for(int i(1); i<5; i++)
	{
	cout << "Enter" << i << "number of B: ";
	cin >> A;
	end_B->next = new List;
	end_B = end_B->next;
	end_B->a.key = A;
	end_B->next = NULL;
	}
	Print(list_A);
	Print(list_B);
	R(&list_A,&list_B,&list_C);
	Print(list_C);

	_getch();
}