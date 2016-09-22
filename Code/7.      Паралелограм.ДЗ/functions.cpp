#include <iostream>
#include "functions.h"

using namespace std;



#pragma region MyFunction
void FirstLine(int a, int b)
{
for(int i = 0; i < a-1;++i)
	cout << " ";
for(int i = 0; i < b;++i)
	cout << "*";
cout << "\n";
}
void MiddleLines(int a, int b, int top,int bot)
{
for(int i = 0; i < a-2;++i)
{
	for(int i = 0; i < top;++i)
		cout << " ";
	cout << "*";
	for(int i = 0; i < b-2;++i)
		cout << " ";
	cout << "*";
	bot++;
	top--;
	cout << "\n";
}
}
void LastLine(int b)
{
for(int i = 0; i < b;++i)
	cout << "*";
cout << "\n";
}
//By Nazar
#pragma endregion