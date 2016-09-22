#include <iostream>
#include <conio.h>
#include "functions.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
	int N;
	N = CinCout();
	int End, Cent, TopBot;
	TopBot = N - 2;
	Cent = 1;
	int NumberEnd = 0;
	FirstString(N);
	ElseString(N, TopBot, Cent, NumberEnd);
	End = NumberEnd + 1 + N;
	LastString(End);
	_getch();
}