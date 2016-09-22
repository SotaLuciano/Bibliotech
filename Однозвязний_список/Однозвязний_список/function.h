#include <iostream>
using namespace std;

struct A
{
	int key;
};

struct List
{
	A a;
	List *next;
};

void Print(List *);
void Input_Beg(List **, const A &);
void Insert(List ** begin, const A &);