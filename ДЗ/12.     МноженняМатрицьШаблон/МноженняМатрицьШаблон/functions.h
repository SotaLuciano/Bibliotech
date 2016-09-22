#include <iostream>
using namespace std;
template <class T> 
void InsertMatrix(T **a,T **b, T **c,T n, T p, T m)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < p; ++j)
		{
			cout << "A[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < p; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << "B[" << i << "][" << j << "] = ";
			cin >> b[i][j];
		}
	}
	cout << "Matrix a = " << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < p; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Matrix b = " << endl;
	for (int i = 0; i < p; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}
template <class T> 
void MatrixMultiplication(T **a, T **b, T **c, T n, T p, T m)
{
	int s;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			s = 0;
			for (int k = 0; k<n; k++)
			{
				s += a[i][k] * b[k][j];
			}
			c[i][j] = s;
		}
	}
	cout << "Matrix c = " << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}