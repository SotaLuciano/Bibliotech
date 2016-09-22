
#include <iostream>
#include <fstream>
typedef bool(*COMPARE_INTS)(int,int);
//Predicates
bool intLessThan(int a, int b) {return a<b;}
bool intGreaterThan(int a, int b) {return a>b;}

using namespace std;

void IntsToBin(ifstream& fInTxt, fstream& fOutBin)
{
	fInTxt.seekg(0, ios::beg);
	fOutBin.seekg(0, ios::beg);
	int temp;
	while(!fInTxt.eof())
	{
		fInTxt >> temp;
		fOutBin.write((char *)&temp, sizeof(int));
	}
	fOutBin.flush();
}

void SortBinFile(fstream& file, COMPARE_INTS compareToInts)
{
	if(!file) {cout << "Error"; return;}
	file.seekg(0, ios::end);
	int recordsQuantity = file.tellg()/sizeof(int);
	file.seekg(0, ios::beg);
	//sorting...
	int tempZ, tempJmin;
	for(int j = 0; j < recordsQuantity-1; ++j)
	{
		int j_min = j;
		for(int z = j+1; z< recordsQuantity; ++z)
		{
			file.seekg(z*sizeof(int), ios::beg);
			file.read((char*)&tempZ, sizeof(int));
			file.seekg(j_min*sizeof(int), ios::beg);
			file.read((char*)&tempJmin,sizeof(int)); 
			if (compareToInts(tempZ,tempJmin)) 
			j_min=z; 
		} 
		file.seekg(j_min*sizeof(int),ios::beg); 
		file.read((char*)&tempJmin,sizeof(int)); 
		int TempToSwap; 
		file.seekg(j*sizeof(int),ios::beg); 
		file.read((char*)&TempToSwap,sizeof(int)); 
		file.seekg(j*sizeof(int),ios::beg); 
		file.write((char*)&tempJmin,sizeof(int)); 
		file.seekg(j_min*sizeof(int),ios::beg); 
		file.write((char*)&TempToSwap,sizeof(int)); 
	} 
file.flush(); 
} 

void createIntersectionFile(fstream& fBinA, fstream& fBinB, ofstream& fTxtRez, COMPARE_INTS comparer) 
{ 
 fBinA.seekg(0, ios::end); 
 int totalBytesInA = fBinA.tellg(); 

 fBinB.seekg(0, ios::end); 
 int totalBytesInB = fBinB.tellg(); 

 fBinA.seekg(0, ios::beg); 
 fBinB.seekg(0, ios::beg); 

 int tempA, tempB; 
	 while (fBinA.tellg() < totalBytesInA && fBinB.tellg() < totalBytesInB) 
	 { 
		fBinA.read((char*)& tempA, sizeof(int)); 
		fBinB.read((char*)& tempB, sizeof(int)); 

			 while (comparer(tempA, tempB) || comparer(tempB, tempA)) 
		{ 
				if (comparer(tempA, tempB)) 
				{ 
					 while (!fBinA.eof() && comparer(tempA, tempB)) 
					 { 
						fTxtRez << tempA << endl;
						fBinA.read((char*)& tempA, sizeof(int)); 
					 } 
				} 
				if (comparer(tempB, tempA)) 
				{ 
					 while (!fBinB.eof() && comparer(tempB, tempA)) 
					{ 
						fTxtRez << tempB << endl;
						fBinB.read((char*)& tempB, sizeof(int)); 
					} 
				} 

			if (fBinA.eof() || fBinB.eof()) 
			break; 
		} 
		if (tempA == tempB) 
		 { 
				 fTxtRez << tempA << endl; 
		 } 
	} 
	 fBinB.read((char*)& tempB, sizeof(int));
	 fTxtRez << tempB;
	 if(fBinA.eof() && !fBinB.eof())
	 {
		 while(fBinB.eof())
		 {
		 fBinB.read((char*)& tempB, sizeof(int)); 
		 fTxtRez << tempB << endl;
		 }
	 }
	 if(!fBinA.eof() && !fBinB.eof())
	 {
		 while(fBinA.eof())
		 {
		 fBinA.read((char*)& tempA, sizeof(int)); 
		 fTxtRez << tempA << endl;
		 }
	 }
} 