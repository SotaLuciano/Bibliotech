// Метод половинного ділення
#include <iostream>
#include <conio.h>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
double f(double a)
{
return pow(2,a) - 32;
}
int main()
{
	setlocale(LC_ALL, "Ukrainian");	
	double a, b, E, f_a, f_b, x, f_x;
	E = 0.000001;
	cout << "Enter a = "; cin >> a;
	cout << "Enter b = "; cin >> b;
	f_a = f(a);
	f_b = f(b);
	if(f(a) * f(b) > 0) {cout << "Incorrect a adn b";}
	else
	{
		if (b > a)
		{
			while(abs(b-a) > E)
			{
			x = (a + b) / 2;
			f_x = f(x);
				if (f_x == 0) cout << "X = " << x;
				else 
				{
					if((f_x * f_a) < 0)
					{
					b = x;
					f_b = f_x;
					}
					else {a = x; f_a = f_x;}

				}
			
			}
			cout << "x = " << x << endl;
	
		}	
		else {cout << "Wrong interval";}
	
	}
	_getch();
	return 0;
}