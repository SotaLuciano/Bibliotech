#include <iostream>
#include <conio.h>
#include "functions.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
	int a, b;
	cout << "����i�� a =";
	cin >> a;
	cout << "����i�� b =";
	cin >> b;
	int top, bot;
	top = a-2;
	bot = 1;
	FirstLine(a,b);
	MiddleLines(a,b,top,bot);
	LastLine(b);
	_getch();
}