// Para2.13.11.2015.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,  R, n;
	cout << "a="; cin >> a;
	cout << "n="; cin >> n;
	R = a*n;
	for ( int i = 1; i < n; i++) {
		cin >> a;
		R = R*3 + (n - i)*a;
	}
	cout  << R;
	system("pause");
    return 0;
}

