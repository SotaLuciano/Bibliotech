#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
using std::cin;
using std::cout;
void Input(int *A, int n)
{
	
	for(int i = 0; i < n; ++i)
	{
	cout << "Enter A[" << i << "]=";
	cin >> A[i];
	}
	int min, max, kmin, kmax;
	min = A[0];kmin = 0;
	max = A[0];kmax = 0;
	for(int i = 0; i < n; ++i)
	{
	if(A[i] < min)
	{
	min = A[i];
	kmin = i;
	}
	else if(A[i] > max)
	{
	max = A[i];
	kmax = i;
	}
	}
	cout << "Max =" << max << "\nMin =" << min << endl;
	cout << "KMax =" << kmax << "\nKMin =" << kmin << endl;
	int plus = 0;
	if(kmax < kmin)
	{
	for(;abs(kmax - kmin) != 0; ++kmax)
	{
		if(A[kmax + 1] > 0)
			plus = plus + 1;
		
	}
	cout << "\nPlus = " << plus << endl;
	}
	else if(kmax > kmin)
	{
	for(;abs(kmax - kmin) != 0; ++kmin)
	{
		if(A[kmin] > 0)
			plus = plus + 1;
		
	}
	cout << "\nPlus = " << plus << endl;
	}
}
void main()
{
	int n;
	cout << "Enter n =";
	cin >> n;
	int *A = new int [n];
	Input(A,n);
	_getch();
}