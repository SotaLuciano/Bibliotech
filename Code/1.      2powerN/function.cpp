#include "function.h"
#include <iostream>

using namespace std;

void power(int N)
{
	int *a = new int[100];
	a[0] = 1;
	for (int i = 99; i > 0; --i)
		a[i] = 0;
	while (N)
	{
		int tmp = 0;
		for (int i = 0; i < 99; ++i)
		{
			if (a[i] * 2 > 9)
			{
				if (tmp)
				{
					a[i] *= 2; a[i] %= 10; ++a[i];
				}
				else
				{
					a[i] *= 2; a[i] %= 10; ++tmp;
				}
			}
			else
			{
				a[i] *= 2;
				if (tmp)
				{
					++a[i];
					--tmp;
				}
			}
		}
		--N;
	}
	for (int i = 99; i >= 0; --i)
	{
		if (a[i + 1] > 0) break;
		if (a[i] > 0)
			for (; i >= 0; --i)
			{
				cout << a[i];
			}
	}
	cout << endl;
	delete a;
}
// By Nazar