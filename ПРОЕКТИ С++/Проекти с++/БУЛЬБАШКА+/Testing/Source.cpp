#include <conio.h>
#include <iostream>
#include <cctype>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;
int main()
{
	setlocale(LC_ALL, "Ukrainian");

/*	***********************************************************************************
	int A[10];
	cout << "Заповнення масиву:\n";
	for(int i = 0; i < 10; i++)
	{
		cout << "Введiть значення " << i << " елемента масиву: ";
		while (!(cin >> A[i]))
		{
			cin.clear();
			while(cin.get() != '\n');
			cout << "Введiть значення " << i << " елемента масиву: ";
		}
	}
	system("cls");
	
	cout << "Вихiдний масив:\n";
	for (int i = 0; i < 10; i++)
		cout << "A[" << i << "] = " << A[i] << endl;
	int Min = A[0], Max = A[0];
	for (int i = 1; i < 10; i++)
	{
		if (Max < A[i])
			Max = A[i];
		if (Min > A[i])
			Min = A[i];
	}
	cout << "MAX = " << Max << endl;
	cout << "MIN = " << Min << endl;
	***************************************************************************************
	cout << "\t\t***Сортування бульбашкою***\n\n";
	int A[10];
	cout << "Заповнення масиву:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Введiть значення " << i << " елемента масиву: ";
		while (!(cin >> A[i]))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Введiть значення " << i << " елемента масиву: ";
		}
	}
	cout << "Вихiдний масив:\n";
	for (int i = 0; i < 10; i++)
	cout << "A[" << i << "] = " << A[i] << endl;

///////////////////////////////////////////////////////////////////////////////////////BUBLE SORTINT
	void bubble_sort(int a);
		for (int j = 0; j < 9; j++) 
		{
			for (int i = 0; i < 10 - j - 1; i++)
			{
				if (A[i] > A[i + 1])
				{
					int b = A[i]; //change for elements
					A[i] = A[i + 1];
					A[i + 1] = b;
				}
			}
		}
///////////////////////////////////////////////////////////////////////////////////////
			
	cout << "Вихiдний масив:\n";	
	for (int i = 0; i < 10; i++)
	cout << "A[" << i << "] = " << A[i] << endl;	
	***************************************************************************************************
	
	char str[80];
	int numberb = 0;
	bool inWord = false;
	char b = 'b';
	cin.getline(str, 10);
	for (int i(0); str[i] != '\0'; i++)
	{
		if (isalpha(b) && !(inWord))
		{
			numberb++;
			inWord = true;
		}
		if (!isalpha(str[i]))
		inWord = false;
		
	}
	cout << "Number of B: " << numberb << endl;
	*******************************************************************************************
	const int n = 3;
	double A[n][n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0, R;
	for (; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			R = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = R;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
			cout << "\t" << A[i][j] << "\n";
	}
	*/



		_getch();

	return 0;
}