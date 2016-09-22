#pragma once
#include <iostream>
using namespace std;
struct CELL
{
	int data;
	CELL* ptr;
};

CELL* formPrimaryList(int);					
void applyEratosphen(CELL*, int);
void printList(CELL*);		
void deleteList(CELL*);	
void removeCELL(CELL*&, CELL*);				
					