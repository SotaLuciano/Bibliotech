#include <iostream>
#include <fstream>
#include <conio.h>
#include "functions.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
	ifstream finA("A.txt") , finB("B.txt");
	if(!finA || !finB) {cout << "Error finA or finB"; return;}
	fstream foutA("A.bin", ios::in | ios::out | ios::binary | ios::trunc);
	fstream foutB("B.bin", ios::in | ios::out | ios::binary | ios::trunc);
	if(!foutA || !foutB) {cout << "Error foutA or foutB"; return;}
	IntsToBin(finA, foutA);
	IntsToBin(finB, foutB);
	finA.close();
	finB.close();
	SortBinFile(foutA, intLessThan);
	SortBinFile(foutB, intLessThan);
	ofstream Res("Results.txt");
	if(!Res) {cout << "Error Results file"; return;}
	createIntersectionFile(foutA, foutB, Res, intLessThan);
	foutA.close();
	foutB.close();
	Res.close();
	_getch();
}