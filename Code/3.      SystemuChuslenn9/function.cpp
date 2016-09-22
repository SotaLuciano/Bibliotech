#include <iostream>
#include "function.h"
using namespace std;

void binarysist(int Number,int System) 
{ 
char mass[] = { 'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' }; 
if (Number == 0) return; 
binarysist(Number / System,System); 
if (Number%System > 9) 
cout << (mass[Number%System - 10]); 
else 
cout<<""<< Number % System; 
}
//By Nazar