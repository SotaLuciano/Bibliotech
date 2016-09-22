#include <iostream>	
#include <conio.h>
#include <cmath>
using std::ios_base;
using namespace std;

double f(double x)
{
return sin(x);
}


void main()
{
	setlocale(LC_ALL, "Ukrainian");

	double a, b, n, R, h;
	int i;
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	cout << "Enter n: "; cin >> n;
	R = 0;
	h = (b - a)/n;
	for(i = 0; i < n; i++)
	{
	R += f(a + h * (i + 0.5));
	}
	R *= h;
	cout << "Result: " << R << endl;
	_getch();
}
	