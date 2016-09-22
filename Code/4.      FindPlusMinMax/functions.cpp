#include <iostream>
#include "functions.h"

using namespace std;

void inputArr(int *&arr, int size)
{
	arr = new int[size];
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter A[" << i << "] = ";
		cin >> arr[i];
	}
}


void printArr(int *&arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << " " << arr[i];
	}
	cout << endl;
}


void FindMinMaxPrint(int *&arr, int size)
{
	int min = arr[0], max = arr[0];
	int min_i, max_i;
	for(int i = 0; i < size; ++i)
	{
		if(arr[i] < min)
		{
		min = arr[i];
		min_i = i;
		}
		if(arr[i] > max)
		{
		max = arr[i];
		max_i = i;
		}
	}
	if( max_i > min_i)
	{
		for(;min_i <= max_i; min_i++)
	{
		cout << arr[min_i] << "\t";
	}
	}
	else
	{
		for(;min_i > max_i; max_i++)
	{
		cout << arr[max_i] << "\t";
	}
	}
}
//By Nazar