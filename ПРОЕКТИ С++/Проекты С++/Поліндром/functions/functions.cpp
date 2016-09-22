// functions.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include <iostream>
// подключение заголовочного файла, с прототипом функции palindrom5()
#include "palendrom.h"
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Enter 5zn-e chislo: "; // введите пятизначное число
	int in_number, out_number; // переменные для хранения введённого пятизначного числа
	cin >> in_number;
	out_number = in_number; // в переменную out_number сохраняем введённое число

	if (palindrom5(in_number)) // если функция вернёт true, то условие истинно, иначе функция вернёт false - ложно
		cout << "Number " << out_number << " - palendrom" << endl;
	else
		cout << "This is not palendrom" << endl;
	system("pause");
	return 0;
}