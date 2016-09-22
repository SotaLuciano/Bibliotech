#include <iostream>
#include "functions.h"
using namespace std;


void code(char *arr, char * key, char * arr2)
{
	int i, j=0;
for(i=0;i<strlen(arr);++i)
{
	arr2[i]=(arr[i]+key[j]);
	++j;
	if(j==strlen(key))
	j=0;
}
i = strlen(arr);
arr2[i++]='\0';
cout<< "Зашифрований текст: " << arr2<<endl;
}
void uncode(char *arr2, char * key, char * arr3)
{
	int i,j=0;
for(int i=0;i<strlen(arr2);++i)
{
	arr3[i]=arr2[i]-key[j];
	++j;
	if(j==strlen(key))
	j=0;
}
i = strlen(arr2);
arr3[i++]='\0';
cout<< "Розшифрований текст: " << arr3<<endl;
}