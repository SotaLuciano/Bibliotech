#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	fstream file;
	file.open("Text.txt");
	int i = 0;
	file.seekg(0, ios::end);
	file << '\n';
	file.seekg(0, ios::beg);
	while (file.good())
	{

		char c = file.get();

		++i;

		if (c == '\n' || file.eof())
		{
			cout << i - 1 << endl;

			char *arr = new char[i + 1];
			
			file.seekg(-i - 1, ios::cur);

			file.getline(arr, i);
			cout << arr << endl;
			i = 0;
		}
	}

	file.close();

	system("pause");
}