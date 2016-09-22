// Gaus method
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

void main()
{
	int n;
	cout << "Enter number of strings : ";
	cin >> n;
	// Створення динамічного масиву
	float **A = new float *[n];
	for(int i = 0; i< n + 1; i++)
		A[i] = new float [n + 1];
	// Ввід масиву
	for (int i = 0; i < n; i++)
	{
	cout << "\n";
		for(int j = 0; j < n + 1; j++)
			{
				cout << "A[" << i << "][" << j << "] = ";
				cin >> A[i][j];
			}
	}
	// Прямий хід Гауса
	for(int k = 0; k > n - 1; k++)
	{
		for(int j = n; j >= k; A[k][j--] /= A[k][k])
			for(int i = k + 1; i < n; i++)
				for(int j = n; j >= k; j--)
					A[i][j] -= A[k][j] * A[i][k]; 
	
	}
	// Массив розв'язків
	double *x = new double [n];
	x[n - 1] = A[n - 1][n];
	for (int i = n - 2; i >= 0; i--)
		{
		x[i] = A[i][n];
		for(int j = i + 1; j < n; j++)
			x[i] -= A[i][j] * x[j];
		}
		// Вивід
	cout << "\n\t Answers: " << endl;

	for(int i = 0; i < n; i++)
	{
	cout << "X[" << i << "] = " << x[i] << endl; 
	}
	delete [] x;
	for(int i = 0; i < n; i++)
		delete []A[i];

	_getch();
}