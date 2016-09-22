#include "functions.h"
#include <iostream>
#include <fstream>
using namespace std;
#pragma region Functions + Predicates
typedef bool(*FUNC_TO_COMPARE)(Exam, Exam);
// Predicates
void categorizeStudents(Exam *arrStudents, int studQuantity, float BallFrom, float BallTo)
{
	cout << "\n Students with average Ball > " << BallFrom << "adn <= " << BallTo;
	for(int i = 0; i < studQuantity ; ++i)
	{
		if (arrStudents[i].averageBall > BallFrom && arrStudents[i].averageBall <= BallTo)
		{
			cout << '\n' << arrStudents[i].name << arrStudents[i].averageBall;
		}
	}
}

void studentToFile(Exam *Students, int studQuantity, fstream &file)
{
	file.seekg(0, ios::beg);
	file.write((char*)Students, studQuantity*sizeof(Exam));
}

 void sortFile(fstream &file, FUNC_TO_COMPARE predicate)
{
	file.seekg(0, ios::end);
	double recordsQuantity = file.tellg()/sizeof(Exam);
	file.seekg(0, ios::beg);
	Exam tempStrudentZ, tempStudentJmin;
	for(int j = 0; j < recordsQuantity -1;++j)
	{
		int j_min = j;

		for(int z = j+1; z < recordsQuantity; ++z)
		{
			file.seekg(z*sizeof(Exam), ios::beg);
			file.read((char*)&tempStrudentZ, sizeof(Exam));
			file.seekg(j_min*sizeof(Exam), ios::beg);
			file.read((char*)&tempStudentJmin, sizeof(Exam));
			if(predicate(tempStrudentZ, tempStudentJmin))
				j_min = z;
		}
		
		file.seekg(j_min*sizeof(Exam), ios::beg);
		file.read((char*)&tempStudentJmin, sizeof(Exam));
		Exam tempStudentsToSwap;
		file.seekg(j*sizeof(Exam), ios::beg);
		file.read((char*)&tempStudentsToSwap, sizeof(Exam));
		file.seekg(j*sizeof(Exam), ios::beg);
		file.read((char*)&tempStudentJmin, sizeof(Exam));
		file.seekg(j_min*sizeof(Exam), ios::beg);
		file.write((char*)&tempStudentsToSwap, sizeof(Exam));
	}
	file.flush();
}

 void PrintFile(fstream &file, ofstream &Res)
{
	file.seekg(0, ios::end);
	double recordsQuantity = file.tellg()/sizeof(Exam);
	file.seekg(0, ios::beg);
	Exam tempStudent;
	for(int i = 0; i < recordsQuantity; ++i)
	{
		file.read((char*)&tempStudent.name, sizeof(Exam));
		cout << " \n Stud name:" << tempStudent.name;
		cout << " \n Average Ball:" << tempStudent.averageBall;
	}
	file.seekg(0, ios::beg);
	for(int i = 0; i < recordsQuantity; ++i)
	{
		file.read((char*)&tempStudent.name, sizeof(Exam));
		Res << " \n Stud name:" << tempStudent.name;
		Res << " \n Average Ball:" << tempStudent.averageBall;
	}
	file.flush();
	Res.flush();
}
 //By Nazar
#pragma endregion