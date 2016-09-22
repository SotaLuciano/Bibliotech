#include <iostream>
#include <fstream>
#include <conio.h>
#include <cmath>
using namespace std;
/*
	-а) є парними числами;
	-б) діляться на 3 і не діляться на 7;
	-в) є точними квадратами.
	*/

void main()
{
	fstream controlFileTxt("File.txt", ios:: in | ios::out | ios::binary);
	ofstream fileATxt("A.txt");
	ofstream fileBTxt("B.txt");
	ofstream fileCTxt("C.txt");
	if(!controlFileTxt || !fileATxt)
	{
		cout << "Can't open control file";
		return;
	}
//шукаємо парні
double temp;
double res1, res2;
controlFileTxt.seekg(0, ios::end);
int recordsQuantity = controlFileTxt.tellg()/sizeof(int);
controlFileTxt.seekg(0,ios::beg);
//PARNI
for(int i = 0; i < recordsQuantity + 3; ++i)
{
	controlFileTxt >> temp;
	res1 = temp / 2;
	if (res1 == int(res1))
	{
		fileATxt << temp << endl;
	}
}
//B)
controlFileTxt.seekg(0,ios::beg);
for(int i = 0; i < recordsQuantity + 3; ++i)
{
	controlFileTxt >> temp;
	res1 = temp / 3;
	res2 = temp / 7;
	if(res1 == int(res1) && res2 != int(res2))
	{
		fileBTxt << temp << endl;
	}
}
//V)
controlFileTxt.seekg(0,ios::beg);
for(int i = 0; i < recordsQuantity + 3; ++i)
{
	controlFileTxt >> temp;
	if( temp == (int(sqrt(temp)) * int(sqrt(temp))))
	{
		fileCTxt << temp << endl;
	}
}
	controlFileTxt.close();
	fileATxt.close();
	fileBTxt.close();
	fileCTxt.close();
	_getch();
}