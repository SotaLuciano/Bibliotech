#include <iostream>
#include <conio.h>
using namespace std;

struct Time
{
	int hour;
	int minutes;
};
void InPut(Time &q)
{
	cout << "Enter hour: ";
	cin >> q.hour;
	cout << "Enter minutes: ";
	cin >> q.minutes;
}

Time TimePlusTime(Time &a, Time &b)
{
	Time c;
	if((a.hour + b.hour) > 24)
	{
		c.hour = (a.hour + b.hour) - 24; 
	}
	else
	{
		c.hour = a.hour + b.hour;
	}

	if((a.minutes + b.minutes) >= 60)
	{
		c.minutes = (a.minutes + b.minutes) - 60;
		c.hour ++;
		if((c.minutes) == 60)
		{
		c.minutes = 0;
		c.hour ++;
		}
	}
	else
	{
	c.minutes = (a.minutes + b.minutes);
	}
	return c;
}
void main()
{
	Time A;
	InPut(A);
	
	Time B;
	InPut(B);
	Time C;
	C = TimePlusTime(A, B);
	cout << "\n Result: \n Hour:" << C.hour << "\n Minutes" << C.minutes << endl;
	_getch();
}