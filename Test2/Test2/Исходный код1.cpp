#include <iostream>
#include <conio.h>
#include <math.h>
#include "function.h"
using namespace std;
#define M_PI       3.14159265358979323846
void main()
{
	double Res = 0, c = 1, dva = 2;
	double x = M_PI / 5;
	int n = 0;
	FindN(c, dva, Res, n, x);
	_getch();
}
