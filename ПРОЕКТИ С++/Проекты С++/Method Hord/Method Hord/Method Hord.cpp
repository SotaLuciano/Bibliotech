// Method Hord.cpp: ���������� ����� ����� ��� ����������� ����������.
//12.11.2015 ����� ���� ���� ������ 

#include "stdafx.h"
#include <iostream>
#include<cmath>

using namespace std;
float f(double a) {
	return sqrt(a) - 12;//�������
}

int main() 
{
	double a, b, E, x;// ������������� ������

	E = 0.000001;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b; //�������� ������ 
	if (a >= 0 && b >= 0)
	{// �������� �� a i b ������ �����
		x = (-f(a)*(b - a)) / (f(b) - f(a)) + a;


	if (f(a) == 0) cout << "x=" << a;
	else if (f(b) == 0) cout << "x=" << b; 
	else // �������� �� a ��� b � ������� �������
		if (a > b) cout << "Incorect interval\n"; // �������� �� ������� ���������� ��������
		else if (f(a)*f(b) > 0) cout << "NO ANSWERS ON THIS INTERVAL \n"; // �������� �� �� �������� �������� ������� �����
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

