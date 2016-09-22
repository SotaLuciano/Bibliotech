#include <iostream>
#include "functions.h"
#include <fstream>
#include <conio.h>
using namespace std;
 
void main()
{
	fstream controlFileTxt("Koff.txt", ios:: in | ios::out | ios::binary);
	ofstream fileATxt("A.txt");
	ofstream fileBTxt("B.txt");
	if(!controlFileTxt || !fileATxt || !fileBTxt)
	{
		cout << "Can't open control file";
		return;
	}
	controlFileTxt.seekg(0, ios::end);
	int recordsQuantity = controlFileTxt.tellg()/sizeof(int);
	controlFileTxt.seekg(0,ios::beg);
	recordsQuantity = recordsQuantity + 3;
	if(recordsQuantity / 3 != int(recordsQuantity / 3))
	{
		cout << "Wrong Input";
		return;
	}
	double a , b , c;
	long double k, f, g;
	cout << "\n\t\t\t y = kx + f\n"<< endl;
	while(recordsQuantity > 0)
	{
		controlFileTxt >> a;
		controlFileTxt >> b;
		controlFileTxt >> c;
		if( a == 0 || b == 0)
		{
		cout << "Wront Numbers";
		return;
		}
		k = -(a/b);
		f = -(c/b);
		g = (-a + 1)/(b + 1);
		fileATxt <<"a = " << -a << " b = " << b << "c = any number" << " OR " << "k =" << k << " f = -c/" << b << endl;
		fileBTxt <<"a = " << -a + 1 << " b = " << b + 1 << "c = any number" << " OR " << "k =" << g << " f = -c/" << b << endl;
		recordsQuantity = recordsQuantity - 3;
		
	}
	controlFileTxt.close();
	fileATxt.close();
	fileBTxt.close();
		_getch();
}