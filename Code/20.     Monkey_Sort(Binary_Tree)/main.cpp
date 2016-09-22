#include "functions.h"
#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukrainian");
TreeItem *root = NULL;
int arr[] = {8,9,7,3,5,11,2,15,10,6,4,13,1,19};

for each(int i in arr)
{
	Insert(root,i);
}
PrintFromNode(root);
DelTree(root);
_getch();
}