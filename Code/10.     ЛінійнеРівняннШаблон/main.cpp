#include <iostream>
#include "functions.h"
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	double y, k, b;
	cout << "----------------------------" << endl;
	cout << "\t\t\ty=kx + b\n";
	cout << "����i�� y = ";
	cin >> y;
		cout << "����i�� k = ";
	cin >> k;
	cout << "����i�� b = ";
	cin >> b;
	cout << "----------------------------" << endl;
	cout << "X = " << Line(y,k,b) << endl;
	_getch();
	return 0;
}
