// янпрсбюммъ люяхбс

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void main ()
{
	setlocale(LC_ALL, "Ukrainian");
	const int n = 10;
	int A[n] = {23,32,15,16,12,54,43,76,53,1};
	for (int i = 0; i < n-1; i++)
	{
		for (int i = 0; i < n-1; i++)
		{
			if (A[i] > A[i + 1])
				swap(A[i], A[i + 1]); 
		}
	
	}
	for(int i = 0; i < n; i++)
	cout << i << "element - \t" << A[i] << endl;
	_getch();
}