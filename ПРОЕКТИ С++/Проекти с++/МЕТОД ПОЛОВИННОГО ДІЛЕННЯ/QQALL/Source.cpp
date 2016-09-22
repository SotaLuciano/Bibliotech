// ÌÅÒÎÄ ÏÎËÎÂÈÍÍÎÃÎ Ä²ËÅÍÍß
#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
double f(double a)
{
	return pow(2, a) - 32;
}
void main()
{
	setlocale(LC_ALL, "Ukrainian");
	double a, b, x, E, f_a, f_b, f_x;
	E = 0.0001;
	cout << "Ââåäiòü ìåæi  'a' i 'b'" << endl;
	cin >> a;
	cout << endl;
	cin >> b;
	f_a = f(a);
	f_b = f(b);
	if (f_a*f_b > 0)
	{
		cout << "Íà öüîìó ïğîìiæêó íåìàº êîğåíiâ \n";
	}
	else
		{
		if (b > a)
			while (abs(b - a) > E)
			{
				x = (b + a) / 2;
				f_x = f(x);
				if (x == 0)
				{
					cout << "x = " << x << endl;
					break;
				}
				else
				{
					if (f_x*f_a < 0)
					{
						b = x;
						f_b = f_x;
					}
					else
					{
						a = x;
						f_a = f_x;
					}
				}
			}
			cout << "x=" << x << endl;
	
		}
	_getch();
}