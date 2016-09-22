#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void shiftArray(int *arr, int actualSize, int shift);
void inputArray(int *arr, int size)
{
arr = new int[size];
for(int i = 0; i < size;++i)
	{
		cin >> arr[i];
	}
}
void printArray(int *arr, int size)
{
	for(int i = 0; i < size; ++i)
	{
	cout << "Arr[" << i << "]" << arr[i] << endl;
	}
}
void shiftArray(int *arr, int actualSize, int shift)
{
	int *b = new int[actualSize];
	int *ptr = b;
		for(int k = 0;k < actualSize; ++k)
		{
		if(++ptr > (b + actualSize-1))
		ptr = b;
		}
	int k =0;
	for(;ptr < (b + actualSize); ++k)
	{
		(*ptr++) = *(arr + k);
	}
	ptr = b;
	while(k  < actualSize)
	{(*ptr++) = *(arr + k);}
	for(k = 0;k < actualSize;++k)
	{
	arr[k] = b[k];
	delete b;
	}
}
void main()
{
	cout << "\nArraysize: ";
	int arrSize;
	cin >> arrSize;
	int *arr;
	arr = new int[arrSize];
	inputArray(arr, arrSize);
	int shift;
	cout << "\n Input shift:";
	cin >> shift;
	shiftArray(arr, arrSize, shift);
	printArray(arr, arrSize);
	delete arr;
	_getch();
}