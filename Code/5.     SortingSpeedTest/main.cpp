#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

using namespace std;

void main()
{

	const int N = 50000;

	//long i, c[100], limit;// - for Shell modification

	long i;
	long a[N], b[3] = { 10000, 20000, 50000 };
	time_t t1, t2, t3;
	double diff_t[3];

	cout << setiosflags(ios::fixed | ios::showpoint | ios::right) << setprecision(10);

	srand(time(0));

	for (long j = 0; j<3; ++j)
	{
		// limit = Shell (c,b[j]);						// for Shell modification

		for (i = 0; i<b[j]; ++i)
			a[i] = rand() % b[j];


		cout << "\n\n\n Vyhidnyj masiv z " << b[j] << "elementiv : \n";
		PrintArray(a, b[j]);

		t1 = time(&t3);
	//	BSort(a, b[j]);
		// BSort2(a, b[j]);
	//	 BSortByShell (c, limit, a, b[j]);			// for Shell modification
	//	 QSort (a, 0, b[j] - 1);						// for Quick Sort
		bubbleSort(a, b[j]);							//BUBLE SORT
		t2 = time(&t3);

		diff_t[j] = difftime(t2, t1);

		cout << "\n\n Vidsortovanyj masiv z : " << b[j] << "elementiv : \n";
		PrintArray(a, b[j]);
	}

	cout << "\n\n Chas sortuvannya : ";
	for (int j = 0; j<3; ++j)
		cout << "\n Dlya " << b[j] << "elementiv : " << diff_t[j] << "\n";
}