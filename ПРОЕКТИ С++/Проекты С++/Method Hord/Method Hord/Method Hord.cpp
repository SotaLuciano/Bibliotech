// Method Hord.cpp: определяет точку входа для консольного приложения.
//12.11.2015 Метод хорд Ежов Виктор 

#include "stdafx.h"
#include <iostream>
#include<cmath>

using namespace std;
float f(double a) {
	return sqrt(a) - 12;//Функція
}

int main() 
{
	double a, b, E, x;// Представлення змінних

	E = 0.000001;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b; //Введення данних 
	if (a >= 0 && b >= 0)
	{// Перевірка чи a i b додатні числа
		x = (-f(a)*(b - a)) / (f(b) - f(a)) + a;


	if (f(a) == 0) cout << "x=" << a;
	else if (f(b) == 0) cout << "x=" << b; 
	else // Перевірка чи a або b є коренем рівняння
		if (a > b) cout << "Incorect interval\n"; // Перевірка чи введено правильний інтервал
		else if (f(a)*f(b) > 0) cout << "NO ANSWERS ON THIS INTERVAL \n"; // Перевірка чи на заданому інтервалі існують корені
		else {
			
			while (abs(b - x) > E)
			{
				b = x;
				x = (-f(a)*(b - a)) / (f(b) - f(a)) + a;
				
			}
			cout << "x=" << x << "\n";
		}
	}
	else cout << "a and b cant be negative\n";
    return 0;
}

