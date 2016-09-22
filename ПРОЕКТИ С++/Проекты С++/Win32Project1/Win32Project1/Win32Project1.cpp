// Win32Project1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>


using namespace std;
int L[26], sum;
int main()
{
	char *S = new char[255];
	int i = 0;
	ifstream file("doc.txt");
	file.getline(S,255);
	do
	{
		
		for (; i < strlen(S); i++)
			if (S[i] >= 'a'&& S[i] <= 'z') L[S[i] - 'a']++;
			else if (S[i] >= 'A'&& S[i] <= 'Z') L[S[i] - 'A']++;
	}
			while (strlen(S));
	
	for (i = 0; i < 26; sum += L[i++]);
	for (i = 0; i < 26; i++)
	{
		cout << "\n" << 'A+i';
		cout.put('A' + i);
		cout << "=" << (float) L[i] / sum;
	}




	return 0;
}



