// Para2. 13.11.2015.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	double x1 = 1.001, x0;
	do {
		x0 = x1;
		x1 = x0*x0*x0 - 3 * x0*x0 + 4*x0 - 1;
		cout << "x1=" << x1<<"\n";
	} while (abs(x0 - x1) > 0.00000001);

	
}

