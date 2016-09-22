#include <iostream>
#include <string>
#include "functions.h"
#include <conio.h>

using namespace std;
const int MAX_Len = 256;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
	char String[MAX_Len];
	cin.getline(String, MAX_Len);
	cout << String<<endl;

	DeleteSpace(String);

	if (ISPolindrom(String))
		cout << "It is polindrom\n";
	else cout << "It is not polindrom\n";
	_getch();
}
