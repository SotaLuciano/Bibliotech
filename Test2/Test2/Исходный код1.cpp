#include <iostream>
#include <fstream>
using namespace std;
void main()
{
	/*
	ifstream file("Text.txt");
	if (!file)
		cout << "Trouble file" << endl;
	int i = 0;
	char c;
	while (!file.eof())
	{
		c = file.get();
			++i;

			if (c == '\n' || file.eof())
			{
				cout << i - 1 << endl;

				file.seekg(-i - 1, ios::cur);

				char *arr = new char[i];

				file.getline(arr, i);
				fgets(arr, i, file);
				cout << arr << endl;

				i = 0;

				if (c == 'ÿ') break;
			}
	}

	file.close();
	*/
	fstream file;

	file.open("Text.txt");

	int i = 0, k=0, lenght;

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
			if (!file.good())
			{
				file << '\n';
				file.seekg(-i - 1, ios::cur);
				file.getline(arr, i);
				cout << arr << endl;
			}

			i = 0;
		}
	}

	file.close();

	system("pause");
}