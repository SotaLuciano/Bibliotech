//Code by Maksym Filipov
#pragma once
#include <iostream>
#include <fstream>

using namespace std;

typedef bool(*COMPARE_INTS)(int, int);

bool intLessThan(int a, int b);
bool intGreaterThan(int a, int b);

void IntsToBin(ifstream& fInTxt, fstream& fOutBin);
void SortBinFile(fstream& file, COMPARE_INTS compareToInts);
void createIntersectionFile(fstream& fBinA, fstream& fBinB, ofstream& fTxtRez, COMPARE_INTS comparer);
