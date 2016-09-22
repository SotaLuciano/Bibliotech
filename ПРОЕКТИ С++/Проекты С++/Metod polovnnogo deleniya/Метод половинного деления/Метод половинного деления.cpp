// Метод половинного деления.cpp: определяет точку входа для консольного приложения. 
//11.11.2015 Ежов Виктор Метод половинного деления 

#include "stdafx.h" 
#include <iostream> 
#include <cmath> 

using namespace std;

double f(double a) {
	return pow(2,a)-32;
}


int main()
{
	double a, b, x, E, f_a, f_b, f_x; // а- Ліва межа інтервалу. b- права межа інтервалу. E-похибка. x- корінь 


	cout << "Please enter interval of counting \n ";
	cout << "\n a= "; cin >> a;
	cout << "\n b= "; cin >> b;// Ввід a,b 
	E = 0.000000001;
	f_a = f(a); // Обрахування значень функції в точці a 
	f_b = f(b);// Обрахування значень функції в точці b 
	if (f_a*f_b > 0) { cout << "There is no answers on this interval \n"; } // Перевірка чи на заданому інтервалі існують корені
	else {
		if (b > a) {
			while (abs(b - a) > E) // Цикл знаходження кореня
			{
				x = (b + a) / 2;
				f_x = f(x);
				if (f_x == 0) { cout << "x=" << x <<"\n"; break; }
				else {
					if (f_x*f_a < 0) 
					{
						b = x;
						f_b = f_x;
					}
					else { a = x; f_a = f_x; }

					

					}
				
			}
			cout << "x=" << x << "\n";
		}
		else cout << "Uncorect interval";


		system("pause");
		return 0;
	}

}
