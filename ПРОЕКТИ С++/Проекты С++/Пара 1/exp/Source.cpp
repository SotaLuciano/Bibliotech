// 06.10.2015 Пара по С\С++ 1
#include<iostream>
#include<math.h>


using namespace std;
 int main() 
 {
	double a, b, h, ma,mi,x ; // double a=-3.0, b=4.25, h=0.1; (альтернативний варіант)

	cout << "\n input a=";cin >> a;
	cout << "\n input b="; cin >> b;
	cout << "\n input h=";cin >> h;// Ввід данних

	ma = mi = a*sin(a)*exp(-a*a);
	if ((b - a)*h > 0)
		while ((b - a)*h >= 0)  {
			x= a*sin(a)*exp(-a*a);
			if (x > ma) ma = x;
			else if (x < mi) mi = x;

			cout << "\n" << a << "\t" << x;
			a += h;
}
	else cout << "\n Uncorect";

	cout << "\n max=" << ma << "\n min=" << mi;

	system("pause");
 
 }
