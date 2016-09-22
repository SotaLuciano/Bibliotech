// Method HORD
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
float f(double a)
{
	return sqrt(a) - 12;
}
void main ()
{
	setlocale(LC_ALL, "Ukrainian");
	double a, b, x, E;
	E = 0.000001;
	cout << "Enter a = "; cin >> a;
	cout << "Enter b = "; cin >> b;
	if(a >=0 && b >=0)
	{
		x = (-f(a) * (b-a))/ (f(b) - f(a)) + a;
		if (f(a) == 0)
			cout << "X = " << a;
		else if (f(b) == 0)
			cout << "X = " << b;
		else if(a > b)
			cout << "Incorrect a and b";
		else if(f(a) * f(b) > 0)
			cout << "No answers on this interval";
		else
		{
			while (abs(b - x) > E)
			{
				b = x;
				x = (-f(a) * (b - a))/ (f(b) - f(a)) + a;
			}
			cout << "X = " << x;
		}

	}
	else cout << "Incorrect interval";

	_getch();
}