#include "function.h"
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