#include <iostream>
#include "functions.h"
#include <conio.h>
using namespace std;

void main() 
{
	setlocale(LC_ALL, "Ukrainian");

	int n, p, m;
	cout << "n = ";
	cin >> n;
	cout << "\np = ";
	cin >> p;
	cout << "\nm = ";
	cin >> m;
	//Створення масивів
	int **a = new int *[p];
	for (int i = 0; i < p; ++i)
	{
		a[i] = new int[n];
	}
	int **b = new int *[m];
	for (int i = 0; i < p; ++i)
	{
		b[i] = new int[p];
	}
	int **c = new int *[m];
	for (int i = 0; i < p; ++i)
	{
		c[i] = new int[n];
	}
	InsertMatrix(a,b,c,n, p, m);
	MatrixMultiplication(a, b, c, n, p, m);
	_getch();
}