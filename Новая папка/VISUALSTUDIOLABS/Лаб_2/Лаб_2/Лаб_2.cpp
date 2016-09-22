#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
// (sin(Pi/5))/(Pi/5) - (cos((Pi/5)/2))
#define M_PI       3.14159265358979323846
void FindN(double c, double dva, double Res, int n, double x)
{
	do{

		c *= cos(x / dva);
		dva = dva * 2;

		Res = ((sin(x) / x) - c);
		++n;
	} while (abs(Res) > 0.001);
	cout << "\n N:" << n << endl;
}
void main()
{
	double Res = 0, c = 1, dva = 2;
	double x = M_PI / 5;
	int n = 0;
	FindN(c, dva, Res, n, x);
	_getch();
}