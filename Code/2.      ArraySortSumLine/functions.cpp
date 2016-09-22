#include<iostream>
#include "functions.h"

using namespace std;

void matrixInput(int** a, int n, int m)
{
	cout << "Enter matrix: " << "\n";
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
		{
			cout << "A[" << i << "][" << j << "]= ";
			cin >> a[i][j];
			cout << "\n";
		}
}

void matrixSum(int** a, int* sum, int n, int m)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			sum[i] = sum[i] + a[i][j];
}
void matrixSort(int** a, int* sum, int n)
{
	int* c;
	for(int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		if (sum[i]>sum[j])
		{
			c = *&a[i];
			*&a[i] = *&a[j];
			*&a[j] = c;
		}
}

void matrixPrint(int** a, int n, int m)
{
	for (int i = 0; i < n; ++i)
	{  
		for (int j = 0; j < m; ++j)
		{
			cout << "A[" << i << "][" << j << "]= " << (*&a[i][j]);
			cout << "\t";
		}
	cout << "\n";
   }
}
//By Nazar