#include <iostream>
#include <conio.h>
#include <cmath>
#include "functions.h"
using namespace std;
const int N = 10;

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