# include <conio.h>
# include <cmath>
# include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Ukrainian");
	int N, M;
	cout << "Enter N and M : ";
	cin >> N >> M;
	
	int **p = new int *[N];
	for (int i(0); i < N; i++)
	{
		p[i] = new int[M];
	}
	
	for (int i(0); i < N; i++)
	{
		for (int j(0); j < M; j++)
		{
			p[i][j] = i++;
			cout << p[i][j] << ' ';
		}
		cout << endl;
	}



	for (int i(0); i < N; i++)
		delete[] p[i];
	delete [] p;
	_getch();
}