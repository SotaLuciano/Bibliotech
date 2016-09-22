#include "functions.h"
#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
	float N;
	cout << "¬ведiть число: ";
	cin >> N;
	cout << avs(N);
	_getch();
}