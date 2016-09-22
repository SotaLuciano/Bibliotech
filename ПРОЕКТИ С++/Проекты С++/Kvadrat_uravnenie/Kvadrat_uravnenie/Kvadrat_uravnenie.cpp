// Kvadrat_uravnenie.cpp: ���������� ����� ����� ��� ����������� ����������.
// ���� ������������ a,b,c. ������� ����������� ���������

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double a, b, c, x, x1, x2, D;
	setlocale(LC_CTYPE, "rus");
	cout << "������� ����������� ����������� ������� \n";
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	if (a == 0 && b != 0) {
		x = -c / b;
		cout << "x=" << x;
	}
	else {
		if (b == 0 && a != 0) {
			x1 = sqrt(c / pow(a, 2));
			x2 = -sqrt(c / pow(a, 2));
			cout << "x_1=" << x1 << "\n x_2=" << x2;
		}
		else {
			D = b*b - 4 * a*c;
			if (D < 0) cout << "������ ���" << endl;
			if (D == 0) {
				x = -b / (2 * a);
				cout << "������������ ����� 0. ������ ���� \n" << "x=" << x;
			}
			if (D > 0) {
				x1 = (-b + sqrt(D)) / (2 * a);
				x2 = (-b - sqrt(D)) / (2 * a);
				cout << "������������ ������ ����, ��� �����\n" <<endl << "x_1=" << x1 << endl << "x_2=" << x2 << endl;
			}
			return 0;
		}
	}
}