// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"




#include <iostream>
using namespace std;



struct building
{
	char *owner;
	char *city;
	int amountRooms;
	float price;
	char *month; // ����� ��������� ����
	int year; // ���

	
};

void show(building object) //������� �������, ������� ��������� ���������, ��� ��������
{
	cout << "�������� ��������: " << object.owner << endl;
	cout << "�������� ��������� � ������: " << object.city << endl;
	cout << "���������� ������: " << object.amountRooms << endl;
	cout << "���������: " << object.price << " $" << endl;
	cout << "���� ���������: " << object.month << ' ' << object.year << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	building apartment1;

	apartment1.owner = "�����";
	apartment1.city = "�����������";
	apartment1.amountRooms = 5;
	apartment1.price = 150000;
	apartment1.month = "������";
	apartment1.year = 2013;

	struct building *pApartment; //��� ��������� �� ���������
	pApartment = &apartment1;

	//�������� ��������, ��� ����� ���������� � �������� ��������� ����� ���������
	//���������� ��������  ->
	cout << "�������� ��������: " << pApartment->owner << endl;
	cout << "�������� ��������� � ������: " << pApartment->city << endl;
	cout << "���������� ������: " << pApartment->amountRooms << endl;
	cout << "���������: " << pApartment->price << " $" << endl;
	cout << "���� ���������: " << pApartment->month << ' ' << pApartment->year << "\n\n\n";

	building apartment2; //������� � ��������� ������ ������ ���������

	apartment2.owner = "�����";
	apartment2.city = "����";
	apartment2.amountRooms = 4;
	apartment2.price = 300000;
	apartment2.month = "������";
	apartment2.year = 2012;

	building apartment3 = apartment2; //������� ������ ������ ��������� � ����������� ��� ������ ������� apartment2

	show(apartment3);

	cout << endl << endl;
	return 0;
}