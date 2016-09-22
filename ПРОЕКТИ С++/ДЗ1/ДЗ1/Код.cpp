#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void bubbleSort(int* array, int size, int **arr)
{
    //для швидшого сортування посортованих
    bool wasSwapped = true;
    for (int i = 1; (i <= size) && wasSwapped; ++i)
    {
        wasSwapped = false;
        for (int j = 0; j < (size - i); ++j)
        {
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j + 1]);
				std::swap(arr[j], arr[j + 1]);
                wasSwapped = true;
            }
        }
    }
}
void sortarr(int **arr, int size)
{
	arr = new int*[size];
	for (int i = 0; i < size; ++i)
	{
	arr[i] = new int [size];
	}
	//Enter
	for(int i = 0; i < size; ++i)
	{
		for(int j = 0; j < size; ++j)
		{
			cout << "\nEnter arr[" << i << "][" << j << "]= ";
			cin >> arr[i][j];
		}
	}
	//COUT ARR
	for(int i = 0; i < size; ++i)
		{
			for(int j = 0; j < size; ++j)
			{cout << arr[i][j] << "\t";}
			cout << "\n";
		}
	cout << "\n\n";
	//SYMA
	int *B = new int[size];
	for(int i = 0; i < size; ++i)
		B[i] = 0;
	for(int i = 0; i < size; ++i)
		{for(int j = 0; j < size; ++j)
			{
				B[i] += arr[i][j];
			}
		}
	//SORT
		for(int j = 0; j < size; ++j)
		{
		if(B[j]>B[j++])
			{
				bubbleSort(B, size, arr);
			}
		}
	
//COUT	
	for(int i = 0; i < size; ++i)
		{
			for(int j = 0; j < size; ++j)
			{cout << arr[i][j] << "\t";}
			cout << "\n";
		}
}
void main()
{
int size;
cin >> size;
int **art;
int **&arr = art;
sortarr(arr,size);
_getch();
}