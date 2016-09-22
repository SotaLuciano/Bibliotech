#include "h.h"
#include <iostream>
using namespace std;

void Print(List* start)
{
	List *print = start;

	while(print)
	{
		cout << print->a.key << " - > ";
		print = print->next;
	}
	cout << "NULL \n";
}

void Input_Beg(List** begin, const A &a)
{
	List *t = new List;
	t->a=a;
	t->next = *begin;
	*begin = t;
}
void Insert(List ** begin, const A &a)
{
	List *ins = new List;
	ins->a = a;

	if(*begin == NULL)
	{
		ins ->next = NULL;
		*begin = ins;
		return;
	}
	List *t = *begin;
	if(t->a.key >= ins->a.key)
	{
		ins ->next = t;
		*begin = ins;
		return;
	}
	
	List *t1 = t->next;
	while(t1)
	{
		if(t->a.key < ins->a.key && ins->a.key <= t1->a.key)
		{
			t->next=ins;
			ins->next = t1;
			return;
		}
		t = t1;
		t1=t1->next;
	}
	t->next=ins;
	ins->next = NULL;
}
////////////////////////////////////////////////////////////////////////////////////

void R(List** A, List** B, List ** C)
{
	List* ptr_A = *A;
	List* ptr_B = *B;
	List* end = *C;
	end->a.key = 0;
	end->next = NULL;
	int P;
	while(ptr_A)
	{
		P=0;
		ptr_B = *B;
		while (ptr_B)
		{
			if(ptr_A->a.key != ptr_B->a.key)
			{
				P++;
			}
			ptr_B=ptr_B->next;
			if(P==5)
			{
				end->next = new List;
				end= end->next;
				end->a.key = ptr_A->a.key;
				end->next = NULL;
				ptr_A = ptr_A->next;
			}
		}
		if(ptr_A->next)
		ptr_A= ptr_A->next;
	}
}