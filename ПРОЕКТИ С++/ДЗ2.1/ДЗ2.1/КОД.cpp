#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;
void Dva(int N)
{
if(N >= 2)
{
	Dva(int (N/2));
}
cout << N%2;
}
void main()
{
	int N;
	cin >> N;
	Dva(N);
	_getch();
}