#include <iostream>
#include <string>
#include "functions.h"
using namespace std;
void DeleteSpace(char*S)
{
	for (int i = 0; i < strlen(S); i++)
	{
		if (S[i] == ' ')
			for (int j = i;S[j] != '\0'; j++)
				S[j] =S[j + 1];
	}
}
bool ISPolindrom(char*S)
{
	for (int i = 0, j = strlen(S)-1; i != j;i++,j--)
		if (S[i] != S[j])
		{
			return false;
		}

	return true;
}