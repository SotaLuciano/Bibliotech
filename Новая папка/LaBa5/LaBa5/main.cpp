#include <iostream>
#include <fstream>
#include <conio.h>
#include <cmath>
using namespace std;
const int N = 10;
void main()
{
	fstream controlfile("File.txt", ios::out | ios::in);
	fstream file1("1.txt", ios::out | ios::in | ios::trunc);
	fstream file2("2.txt", ios::out | ios::in | ios::trunc);
	fstream file3("3.txt", ios::out | ios::in | ios::trunc);
	if (!controlfile || !file1 || !file2 || !file3)
	{
		cout << "Can't open file";
		return;
	}
	int A[N];
	int B[N];
	int C[N];
	int D[N];
	controlfile.read((char *)&A, N * sizeof(int));
	/*
	-а) є парними числами;
	-б) діляться на 3 і не діляться на 7;
	-в) є точними квадратами.
	*/
	for (int i = 0, j = 0; i < N; ++i)
	{
		double K;
		K= A[i] / 2;
		if (K == (int)K)
		{
			B[j] = A[i];
			cout << "\n\n" << B[j];
			j++;
		}
	}
	file1.write((char *)&B, N * sizeof(int));
	//2
	for (int i = 0, j = 0; i < N; ++i)
	{
		double K1, K2;
		K1 = A[i] / 3;
		K2 = A[i] / 7;
		if (K1 == (int)K1 && K2 != (int)K2)
		{
			C[j] = A[i];
			cout << "\n\n" << C[j];
			j++;
		}
	}
	file2.write((char *)&C, N * sizeof(int));
	//3
	for (int i = 0, j = 0; i < N; ++i)
	{
		if (A[i] == sqrt(A[i]) * sqrt(A[i]))
		{
			D[j] = A[i];
			j++;
			cout << "\n\n" << D[j];
		}
	}
	file3.write((char *)&D,N * sizeof(int));
	controlfile.close();
	file1.close();
	file2.close();
	file3.close();

	_getch();
}