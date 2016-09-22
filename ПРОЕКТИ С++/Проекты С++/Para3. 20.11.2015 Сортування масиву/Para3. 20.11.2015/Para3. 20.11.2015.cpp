// Para3. 20.11.2015.cpp: определяет точку входа для консольного приложения.
// Сорутвання елементів масиву по зростанню

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int n = 10;
	int  A[] = { 9,8,7,6,5,4,3,2,1,0 };
	for (int i = 0; i < n-1; i++) 
	{
		for (int i = 0; i < n-1; i++) 
		{
			if (A[i] > A[i + 1]) 
			{
				A[i] = A[i] + A[i + 1]; // R=A[i]; A[i]=A[i+1]; A[i+1]=R;
				A[i + 1] = A[i] - A[i + 1];
				A[i] = A[i] - A[i + 1];
			}


		}
	}
	for (int i = 0; i < n; i++) {
		cout << "Element" << i<<"\t" << A[i] << endl;
	}
    return 0;
	}

