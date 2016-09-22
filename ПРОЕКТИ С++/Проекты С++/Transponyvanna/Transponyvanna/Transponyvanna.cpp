// Transponyvanna.cpp: определяет точку входа для консольного приложения.
//Транспонування квадратної матриці

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	const int n = 3;
	double A[n][n] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0, R;
	for (; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			R = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = R;
		}
	}
	for (int i = 0; i < n;i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "\t" << A[i][j]<<"\n";

	}
    return 0;
}

