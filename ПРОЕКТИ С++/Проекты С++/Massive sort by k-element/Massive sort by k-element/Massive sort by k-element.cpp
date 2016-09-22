// Massive sort by k-element.cpp: определяет точку входа для консольного приложения.
//Сортування масиву посортованного до і після к-того елемента НАПРИКЛАД: 1 3 5 7 9 11 13 15 17 19 2 4 6 8 10 12 14 16 18 20

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	
	const int n = 20, k = 10; // Розміри елементу, та положення k  елемента
	double A[n], res; // A[n] - массив. res - резервна змінна( для зміни місцями елементів масиву)

	cout << "Enter massive \n"; 
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "]="; cin >> A[i]; 

	}// Ввід масиву НАПРИКЛАД: 1 3 5 7 9 11 13 15 17 19 2 4 6 8 10 12 14 16 18 20
	
	for (int m=0; m < k; m++)
	{
		for (int i = m,j=k; i < k&&j < n; i++, j++) 
		{
			if (A[i] > A[j])
			{
				res = A[i];
				A[i] = A[j];
				A[j] = res;
			}
		} 
		
	} // Цикл сорутвання 
	cout << "Sort massive \n"; // Вивід відсортованого масиву
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "]=" << A[i] << "\n";
	}
	
	
	system("pause");
    return 0;
}

