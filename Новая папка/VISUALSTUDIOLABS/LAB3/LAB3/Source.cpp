#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
#pragma region FUNCTION
int FindMaxLineSym(int **arr, int size)
{

	int *B = new int[size];
	for(int i = 0; i < size; ++i)
		B[i] = 0;
	for(int i = 0; i < size; ++i)
		{for(int j = 0; j < size; ++j)
			{
				B[i] += arr[i][j];
			}
		}
	// FIND
	int NumberMaxLine = 0;
	int MaxLine = B[NumberMaxLine];
	for(int i = 1; i < size; ++i)
	{	
		if(B[i] > MaxLine) 
		{
		B[i] = MaxLine;
		NumberMaxLine = i;
		}
	}
	return NumberMaxLine;
}
void EnterArr(int **arr, int size)
{
	// ENTER ARRAY
	for(int i = 0; i < size; ++i)
	{
		for(int j = 0; j < size; ++j)
		{
			cout << "\nEnter arr[" << i << "][" << j << "]= ";
			cin >> arr[i][j];
		}
	}
	system("cls");

}
void CoutArr(int **arr, int size)
{
		//COUT ARRAY
		for(int i = 0; i < size; ++i)
		{
			for(int j = 0; j < size; ++j)
			{cout << arr[i][j] << "\t";}
			cout << "\n";
		}
	cout << "\n\n";

}
#pragma endregion

void main()
{
int size;
cin >> size;
//Create ARR
int	**arr = new int*[size];
for (int i = 0; i < size; ++i)
{	arr[i] = new int [size];	}
//ENTER FUNC
	EnterArr(arr,size);
//COUT ARR
	CoutArr(arr,size);
//FINDMAXLineSYM
	FindMaxLineSym(arr,size);
	cout << "Number of MaxSumString is....\t" << NumberMaxLine << endl;
	for (int i = 0; i < size; ++i)
		{
			cout << B[NumberMaxLine][i] << "\t";
		}
_getch();
}