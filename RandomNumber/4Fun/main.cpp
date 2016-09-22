#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

void main()
{
	int t[1000];
	for(int i(0); i<1000; ++i)
	{
	t[i] = rand() % 10000;
	cout << t[i] << endl;
	}
	_getch();
}