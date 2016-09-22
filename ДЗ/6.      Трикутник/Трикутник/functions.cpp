#include <iostream>
#include "functions.h"
using namespace std;
#pragma region MyFunction
int CinCout()
{
cout << "Enter parametr: ";
int a;
cin >> a;
return a;
}
void FirstString(int N)
{
for (int i = 0; i < N-1; ++i)
	{
		cout << " ";
	}
cout << "*";
for (int i = 0; i < N-1; ++i)
	{
		cout << " ";
	}
cout << "\n";
}
int ElseString(int N, int TopBot, int Cent, int &NumberEnd)
{
for(int i = 0; i < N-2; ++i)
{
	for(int i = 0; i < TopBot; ++i)
	{
		cout << " ";
	}
	cout << "*";
	for(int i = 0; i < Cent; ++i)
	{
		cout << " ";
	}
	cout << "*";
	for(int i = 0; i < TopBot; ++i)
	{
		cout << " ";
	}
	cout << "\n";
	TopBot--;
	Cent += 2;
	NumberEnd++;
}
return NumberEnd;
}
void LastString(int End)
{
	for (int i = 0; i < End; ++i)
		cout << "*";
}
#pragma endregion