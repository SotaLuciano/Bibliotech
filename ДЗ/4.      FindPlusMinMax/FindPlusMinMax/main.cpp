#include <iostream>
#include <conio.h>
#include "functions.h"
using namespace std;

void main()
{	
	setlocale(LC_ALL, "Ukrainian");
	cout << "\n ¬ведiть розмiр масиву:";
	int arrSize;
	cin >> arrSize;
	int *arr;
	int min, max, min_i, max_i;
	inputArr(arr, arrSize);
	printArr(arr, arrSize);
	FindMinMaxPrint(arr, arrSize);
	_getch();
}