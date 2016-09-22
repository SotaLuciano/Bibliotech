#include <iostream>
#include "functions.h"
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	double a, b, c;
	cout << "----------------------------" << endl;
	cout << "¬ведiть a = ";
	cin >> a;
		cout << "¬ведiть b = ";
	cin >> b;
		cout << "¬ведiть c = ";
	cin >> c;
	cout << "----------------------------" << endl;
	D(a, b , c);
	_getch();
	return 0;
}