//задано два текстові файли несортовані. Вивести перетин файлів у тектовий файл 
//злиття файлів HOMEWORK 
#include <iostream> 
#include <fstream> 
#include <conio.h> 

using namespace std; 

void intsToBin(ifstream& fInTxt, fstream& fOutBin) 
{ 
 fInTxt.seekg(0, ios::beg); 
 fOutBin.seekg(0, ios::beg); 
 int temp; 
 while (!fInTxt.eof()) 
 { 
 fInTxt >> temp; 
 fOutBin.write((char*)&temp, sizeof(int)); 
 } 
 fOutBin.flush(); 
} 


void createIntersectionFile(fstream& fBinA, fstream& fBinB, ofstream& fTxtRez) 
{ 
	fBinA.seekg(0, ios::end);
	fBinB.seekg(0, ios::end);
	int ABytes = fBinA.tellg();
	int BBytes = fBinB.tellg();
	int tempA, tempB;
	fBinA.seekg(0, ios::beg);
	fBinB.seekg(0, ios::beg);	
			fBinA.read((char*)&tempA, sizeof(int));
		fBinB.read((char*)&tempB, sizeof(int));
	while(!fBinA.eof() && !fBinB.eof())
	{
		if(tempA = tempB)
		{
			fTxtRez << tempA << endl;
		}
		else if(tempA >tempB && !fBinA.eof() && !fBinB.eof())
		{
		fBinB.read((char*)&tempB, sizeof(int));
		}
		else if(tempA < tempB && !fBinA.eof() && !fBinB.eof())
		{
		fBinA.read((char*)&tempA, sizeof(int));
		}
	}
} 


void main() 
{ 
 ifstream finA("A.txt"), finB("B.txt"); 
 if (!finA || !finB) 
 { 
 cout << "\nCan't woork wihs input file(A)"; 
 return; 
 } 
 fstream foutA("A1.bin", ios::in | ios::out | ios::binary | ios::trunc), foutB("B1.bin", ios::in | ios::out | ios::binary | ios::trunc); 
 if (!foutA || !foutB) 
 { 
 cout << "\nCan't work with output file(BIN)"; 
 return; 
 } 
 intsToBin(finA, foutA); 
 intsToBin(finB, foutB); 
 finA.close(); 
 finB.close(); 
 ofstream fTxtRez("C.txt"); 
 if (!fTxtRez) 
 { 
 cout << "\nCan't work with result file"; 
 return; 
 } 
 createIntersectionFile(foutA, foutA, fTxtRez); 
 foutA.close(); 
 foutB.close(); 
 fTxtRez.close(); 
}