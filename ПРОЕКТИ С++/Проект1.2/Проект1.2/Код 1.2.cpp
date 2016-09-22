// 3находження MIN i MAX f(x).

#include <iostream>
#include <conio.h>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "Ukrainian");	
	double a, b, h, mi, ma, x;
	cout << "Enter a = "; cin >> a;
	cout << "Enter b = "; cin >> b;
	cout << "Enter h = "; cin >> h;
	mi = ma = a * sin(a) * exp(-a*a);
	if((b - a)*h > 0)
		while((b - a)* h >= 0)
		{
			x = a * sin(a) * exp(-a*a);
			if (x > ma) ma = x;
			else if (x < mi) mi = x;
			cout << "\n" << a << "\t" << x;
			a += h;
		}
	else cout << "Uncorrect a, b ,h";
	cout << "\n MAX = " << ma << "\n MIN = " << mi << endl;
	_getch();
	return 0;
}