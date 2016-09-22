#include<iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian" );
	int i, j, n, m;
	
	//створюємo масив
	cout << "Введiть кiлькiсть рiвнянь: ";
	cin >> n;
	cout << "Введiть число невiдомих: ";
	cin >> m;
	m += 1;
	float **matrix = new float *[n];
	for (i = 0; i<n; i++)
		matrix[i] = new float[m];

	//вводимо
	for (i = 0; i<n; i++)

	for (j = 0; j<m; j++)
	{
		cout << "Елемент " << "[" << i + 1 << " , " << j + 1 << "]: ";

		cin >> matrix[i][j];
	}

	//виводимо масив
	cout << "Матриця: " << endl;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	
	//Прямий хід.Метод Гауса
	float *xx = new float[100];
	float  tmp;
	int k;

	for (i = 0; i<n; i++)
	{
		tmp = matrix[i][i];
		for (j = n; j >= i; j--)
			matrix[i][j] /= tmp;
		for (j = i + 1; j<n; j++)
		{
			tmp = matrix[j][i];
			for (k = n; k >= i; k--)
				matrix[j][k] -= tmp*matrix[i][k];
		}
	}

	// Зворотній хід
	xx[n - 1] = matrix[n - 1][n];
	for (i = n - 2; i >= 0; i--)
	{
		xx[i] = matrix[i][n];
		for (j = i + 1; j<n; j++) xx[i] -= matrix[i][j] * xx[j];
	}

	//Вивід вирішення
	for (i = 0; i<n; i++)
		cout << "X" << i << " = " << xx[i] << " \n";
	cout << endl;
	delete[] matrix;
	delete[] xx;
	
	_getch();

	return 0;
}