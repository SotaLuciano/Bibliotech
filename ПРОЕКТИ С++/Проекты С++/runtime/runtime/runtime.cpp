#include "stdafx.h"
#include <iostream>
#include <ctime>                    
using namespace std;

int main(int argc, char* argv[])
{
	int s=0;
	double v;
	srand(time(0));
	const int array_size = 200; // ������ ����������� �������
	int array1[array_size]; // ���������� ����������� �������
	for (int counter = 0; counter < array_size; counter++)
	{
		array1[counter] = rand() %30000 - rand() % 30000; // ��������� ������ ���������� ���������� � ��������� �� -49 �� 49 ������������
		cout << array1[counter] << " "; // ������ ��������� ����������� ������� array1
	}
	int min = array1[0]; // ���������� ��� �������� ������������ ��������
	for (int counter = 1; counter < array_size; counter++)
	{
		if (min > array1[counter]) // ����� ������������ �������� � ���������� �������
			min = array1[counter];
	}
	
	cout << "\nmin = " << min << endl;
	cout << "runtime = " << clock() / 1000.0 << endl; // ����� ������ ���������                  
	system("pause");
	return 0;
}