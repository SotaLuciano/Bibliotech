#include "functions.h"
#include <iostream>
#include <fstream>
 using namespace std;
 const int Number = 50;
 typedef bool(*FUNC_TO_COMPARE)(Exam, Exam);
bool aveBallLessThan(Exam firstStudent, Exam secondStudent)
{
	return firstStudent.averageBall < secondStudent.averageBall;
}

bool aveBallGreaterThan(Exam firstStudent, Exam secondStudent)
{
	return firstStudent.averageBall > secondStudent.averageBall;
}

 void main()
 {
 float koeficients[7];
 int i, j, qs, qe;
 Exam exam[Number];
 cout << "Input students quantity:";
 cin >> qs;
 cout << "Input exam quantity: ";
 cin>> qe;
 // <7
 int suma_koeficients;
 for(suma_koeficients = 0, j = 0; j < qe; ++j)
 {
	 cout << "\n Koef for " << j + 1 << " exams"; cin >> koeficients[j];
	 suma_koeficients += koeficients[j];
 }
 
 for(i = 0; i < qs; ++i)
 {
 cout << "Students Name: ";
 cin >> exam[i].name;
	for(j = 0; j < qe; ++j)
	{
		cout << "Input mark of" << j + 1 << " exam :";
		cin >> exam[i].Ball[j];
	}
	for(j = 0, exam[i].averageBall = 0; j < qe; ++j)
	{
		exam[i].averageBall += koeficients[j] * exam[i].Ball[j];
	}
	exam[i].averageBall /= suma_koeficients;
 }
 categorizeStudents(exam, qs, 4.5, 5);
 categorizeStudents(exam, qs, 3.5, 4.5);
 categorizeStudents(exam, qs, 2.5, 3.5);
 categorizeStudents(exam, qs, 0, 2.5);
 cout << endl;
 fstream file("students.bin", ios::out | ios::in | ios::binary | ios::trunc);
 ofstream Res("Results.txt");
 if(!file)
 {
	cout << "\n Error, can not open file";
	return;
 }
 studentToFile(exam, qs, file);
 sortFile(file, aveBallLessThan);
 PrintFile(file, Res);
 file.close();
 Res.close();
 }