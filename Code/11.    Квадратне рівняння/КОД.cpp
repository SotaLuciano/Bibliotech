#include <iostream>
#include "functions.h"
#include <conio.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Ukrainian");
	double a, b, c;
	cout << "----------------------------" << endl;
	cout << "����i�� a = ";
	cin >> a;
		cout << "����i�� b = ";
	cin >> b;
		cout << "����i�� c = ";
	cin >> c;
	cout << "----------------------------" << endl;
	D(a, b , c);
	_getch();
	return 0;
}

	 