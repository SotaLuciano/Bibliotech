#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>
using namespace std;
#pragma region MyFunction
double f(double x)
{
	return sqrt(2.5 + abs(cos(x)) * x * x);
}
const int n = 10;

void Tab(double x[n], double a, double b, double h)
{
	double y = 0;
	for (int i = 0; i < n; ++i)
	{
		y = a + (i*h);
		double function = f(y);
		x[i] = function;
		cout << fixed << setprecision(3) << "X = " << y << " F(x) = " << x[i] << endl;
	}
}

void MinMax(double x[n])
{
	double min = x[0], max = x[0];
	for (int i = 0; i < n; ++i)
	{
		if (min > x[i])
			min = x[i];
		else if (max < x[i])
			max = x[i];
	}
	cout << "MIN = " << min << "\nMAX =" << max << endl;
}
double CinCout()
{
	double a;
	cout << "Enter:";
	cin >> a;
	return a;
}
#pragma endregion

void main()
{
	double a, b, h;
	a = CinCout();
	b = CinCout();
	h = (b - a) / n;
	double x[n];
	Tab(x, a, b, h);
	MinMax(x);	
	_getch();
}