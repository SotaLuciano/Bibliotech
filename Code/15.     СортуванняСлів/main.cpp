#include <iostream>
#include "functions.h"
#include <conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
int N, i;
cout << "����i�� �i���i��� ��i�: ";
cin >> N;

char** words = new char*[N];
for (int i = 0; i < N; i++) 
    {
        words[i] = new char[30];
    }
    
	cout<<"\n����i�� ����a(����i������) :";
    for(i=0;i<N;i++)
	{
        cin.getline(words[i],30);
	}
	SortWords(words,N);
	_getch();
}