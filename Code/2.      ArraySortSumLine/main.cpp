#include<iostream>
#include "functions.h"
#include <conio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
	int n,m;
	cout << "\n ¬ведiть n= "; cin >> n;
	cout << "\n ¬ведiть m= "; cin >> m;

	int **a = new int *[n];
	int *sum = new int[n];	

	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
		sum[i] = 0;
	}
	
	matrixInput(a,n,m); 
	matrixSum(a, sum, n, m); 
	matrixSort(a, sum, n); 
	matrixPrint(a, n, m); 
}