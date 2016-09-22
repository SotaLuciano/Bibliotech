// Method Gaussa.cpp: определяет точку входа для консольного приложения.
//Метод Гаусса

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Please enter size of matrix \n";
	cout << "size="; cin >> n;

	float **A = new float*[n]; //Створення динамічного масиву для матрці
	for (int i = 0; i < n; i++)
		A[i] = new float[n + 1];


	for (int i = 0; i < n; i++)//Введеня масиву
	{
	
	cout << "\n";
	for (int j = 0; j < n + 1; j++)
	 {
		cout << "A[" << i << "][" << j << "]="; cin >> A[i][j];
	 }
    }

	for (int k=0; k < n - 1; k++) // Прямий хід методу Гаусса
	{
		for (int j = n; j >= k; A[k][j--] /= A[k][k]);// ділення на А[k][k]
			for (int i = k + 1; i < n; i++)
				for (int j = n; j >= k; j--)
					A[i][j] -= A[k][j] * A[i][k];
	}

	
	double *x = new double[n];//Масив розв*язків
	x[n- 1] = A[n - 1][n];
	for (int i = n - 2; i >= 0; i--)
	{
		x[i] = A[i][n];
		for (int j = i + 1; j<n; j++) 
			x[i] -= A[i][j] * x[j];
	}
	cout << "Answers are:\n";
	for (int i = 0; i < n; i++)
	{
		cout <<"X["<<i<<"]="<<x[i]<<"\n";

	}
	delete []x;
	for (int i = 0; i < n; i++)
		delete[] A[i];
}