// Para 3. 20.11.2015 Z2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
const int n = 10;
const int m = 6;
using namespace std;
int main()
{
	double A[n], B[m], C[n + m];
	for (int i = 0; i < n; cin >> A[i++]);
	for (int i = 0; i < m; cin >> B[i++]);
	for (int i = 0, j = 0, k = 0; i < n&&j < m;)
	{
		if (A[i] < B[i])
			C[k++] = A[i + 1];
		else
			C[k++] = B[j++];
		//вбивання хвостів

		for (; i < n; C[k++] = B[i++]);
		for (; j < m; C[k++] = B[i++]);
	}

    return 0;
}

