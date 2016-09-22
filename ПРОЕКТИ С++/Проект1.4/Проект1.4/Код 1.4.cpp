//половинне сортування

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void main ()
{
	setlocale(LC_ALL, "Ukrainian");
const int n = 20, k = 10;
int A[n];
for(int i = 0; i < n; i++)
{
cout << "Enter A[" << i << "] = ";
cin >> A[i];
}

for(int m = 0; m < k; m++)
{
	for(int i = m, j = k; i < k&&j < n; i++, j++)
	{
		if(A[i] > A [j])
			swap(A[i], A[j]);
	}

}

cout << "\n Massive \n";
for(int i = 0; i < n; i++)
{
cout << "Element A[" << i << "] = " << A[i] << endl;
}
	_getch();
}