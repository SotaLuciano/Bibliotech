#include "functions.h"
#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
	float N;
	cout << "����i�� �����: ";
	cin >> N;
	cout << avs(N);
	_getch();
}