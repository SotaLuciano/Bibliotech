// ����� ����������� �������.cpp: ���������� ����� ����� ��� ����������� ����������. 
//11.11.2015 ���� ������ ����� ����������� ������� 

#include "stdafx.h" 
#include <iostream> 
#include <cmath> 

using namespace std;

double f(double a) {
	return pow(2,a)-32;
}


int main()
{
	double a, b, x, E, f_a, f_b, f_x; // �- ˳�� ���� ���������. b- ����� ���� ���������. E-�������. x- ����� 


	cout << "Please enter interval of counting \n ";
	cout << "\n a= "; cin >> a;
	cout << "\n b= "; cin >> b;// ��� a,b 
	E = 0.000000001;
	f_a = f(a); // ����������� ������� ������� � ����� a 
	f_b = f(b);// ����������� ������� ������� � ����� b 
	if (f_a*f_b > 0) { cout << "There is no answers on this interval \n"; } // �������� �� �� �������� �������� ������� �����
	else {
		if (b > a) {
			while (abs(b - a) > E) // ���� ����������� ������
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
