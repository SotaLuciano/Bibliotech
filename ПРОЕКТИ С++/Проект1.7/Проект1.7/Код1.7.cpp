// Method NUTONA
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
double f(double x1)
{
return x1*x1*x1 - 3*x1*x1 + 3*x1 - 1;
}
double g(double x1)
{
return 3*x1*x1 - 6*x1 + 3;
}
void main ()
{
double a, x, x1 = 1.1;
float E;
cout << "Enter E = "; cin >> E;

do{
a = x1;
x1 = x1 - f(x1)/g(x1);
x = x1;
}while (abs(x - a) > E);
cout << "X = " << x << endl;
	_getch();
}