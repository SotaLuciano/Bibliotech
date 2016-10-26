// 06.10.2015 Пара по С\С++ 1
#include<iostream>
#include<math.h>

template <typename T>
void BSort2(T array[], long size)
{
	long i, rezerv;
	T temp;
	i = 0;

	while (i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			rezerv = i + 1;
			while ((i >= 0) && (array[i] > array[i + 1]))
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				i--;
			}
			i = rezerv;
		}
		else
			i++;
	}
}
using namespace std;
 void main() 
 {
	 int arr[5] = { 2,5,1,-3,0 };
	 long size = 5;
	 BSort2(arr, size);
	 system("pause");
	 for (int i(0); i < 5; ++i)
		 cout << arr[i];
 }
