#include <iostream>
#include "functions.h"
#include <conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
int N, i;
cout<<"����i�� ������� ����� "<<"n = ";cin>>N;
char *key=new char [N+1];
char arr[100]; // text
char arr2[100]; // code
char arr3[100]; // uncode
cout<<endl<<"����i�� ����: ";
cin.clear();
cin.ignore(INT_MAX, '\n');
cin.getline(key, N+1, '\n');
cout<<"����i�� ���i��������: ";
cin.clear();
cin.getline(arr, 100, '\n');
code(arr, key, arr2);
uncode(arr2, key,arr3);
	_getch();
}
