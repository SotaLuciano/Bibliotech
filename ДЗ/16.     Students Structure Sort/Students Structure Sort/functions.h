#include <iostream>
#include <fstream>
using namespace std;
#pragma region Functions + Struct
struct Exam
{
char name[30];
int Ball [7];
float averageBall;
};
typedef bool(*FUNC_TO_COMPARE)(Exam, Exam);
void categorizeStudents(Exam *arrStudents, int studQuantity, float BallFrom, float BallTo);

void sortFile(fstream &file, FUNC_TO_COMPARE predicate);

void studentToFile(Exam *Students, int studQuantity, fstream &file);


void PrintFile(fstream &file, ofstream& Res);
#pragma endregion