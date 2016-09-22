// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
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
	char *month; // Месяц постройки дома
	int year; // Год

	
};

void show(building object) //создаем функцию, которая принимает структуру, как параметр
{
	cout << "Владелец квартиры: " << object.owner << endl;
	cout << "Квартира находится в городе: " << object.city << endl;
	cout << "Количество комнат: " << object.amountRooms << endl;
	cout << "Стоимость: " << object.price << " $" << endl;
	cout << "Дата постройки: " << object.month << ' ' << object.year << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	building apartment1;

	apartment1.owner = "Денис";
	apartment1.city = "Симферополь";
	apartment1.amountRooms = 5;
	apartment1.price = 150000;
	apartment1.month = "январь";
	apartment1.year = 2013;

	struct building *pApartment; //это указатель на структуру
	pApartment = &apartment1;

	//Обратите внимание, как нужно обращаться к элементу структуры через указатель
	//используем оператор  ->
	cout << "Владелец квартиры: " << pApartment->owner << endl;
	cout << "Квартира находится в городе: " << pApartment->city << endl;
	cout << "Количество комнат: " << pApartment->amountRooms << endl;
	cout << "Стоимость: " << pApartment->price << " $" << endl;
	cout << "Дата постройки: " << pApartment->month << ' ' << pApartment->year << "\n\n\n";

	building apartment2; //создаем и заполняем второй объект структуры

	apartment2.owner = "Игорь";
	apartment2.city = "Киев";
	apartment2.amountRooms = 4;
	apartment2.price = 300000;
	apartment2.month = "январь";
	apartment2.year = 2012;

	building apartment3 = apartment2; //создаем третий объект структуры и присваиваем ему данные объекта apartment2

	show(apartment3);

	cout << endl << endl;
	return 0;
}