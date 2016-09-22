#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
#pragma region MyFunctions
const int N = 10;
template <class T> 
void Arithmetic(T* Array, int N)
{
	T arith = 0;
	for(int i = 0; i < N; ++i)
		arith += Array[i];
	double Res;
	Res = (double)(arith)/N;
	cout << "Result =" << Res << endl;
}

void main()
{
	int Array[N]; 
	for(int i = 0; i < N; ++i)
	{
	cout << "Enter A[" << i << "] =";
	cin >> Array[i];
	}
	Arithmetic(Array,N);
	_getch();
}