// functions.cpp: ���������� ����� ����� ��� ����������� ����������.
#include "stdafx.h"
#include <iostream>
// ����������� ������������� �����, � ���������� ������� palindrom5()
#include "palendrom.h"
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Enter 5zn-e chislo: "; // ������� ����������� �����
	int in_number, out_number; // ���������� ��� �������� ��������� ������������ �����
	cin >> in_number;
	out_number = in_number; // � ���������� out_number ��������� �������� �����

	if (palindrom5(in_number)) // ���� ������� ����� true, �� ������� �������, ����� ������� ����� false - �����
		cout << "Number " << out_number << " - palendrom" << endl;
	else
		cout << "This is not palendrom" << endl;
	system("pause");
	return 0;
}