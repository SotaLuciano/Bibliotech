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
void Input(List **, const int A);
void Print(List *);
void Input_Beg(List **, const A &);
void R(List** A, List** B, List** C);