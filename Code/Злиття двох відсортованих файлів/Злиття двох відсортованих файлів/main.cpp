#include <iostream>
using namespace std;
//Різниця спискiB  A/B
/*
struct stek
{
	int ch;
	stek * next;
};
void push(stek *&p, const int a)
{
stek *k = new stek;
k->next = p;
k->ch = a;
p=k;
}
void main()
{
	bool b;
	double temp;
	stek * A = new stek;
	stek * B= new stek;
	A = B = NULL;
	for(int i(0); i < 10; ++i)
	{
		push(A, rand() % 15);
		push(B, rand() % 10);
	}
	stek* q = new stek;
	q = A;
	cout << "A : ";
	while(q)
	{
		cout << q->ch << " ";
		q=q->next;
	}
	cout << endl;
	q = B;
	cout << "B : ";
	while (q)
	{
		cout << q->ch << " ";
		q= q->next;
	}
	cout << endl;
	cout << "A/B : ";
	while(A)
	{
	q=B;
	while(q)
		{
			if(A->ch == q->ch)
			{
				b = 0; break;
			}
			else
			{
				b = 1; temp = A->ch;
			}
			q=q->next;
		}
	if(b)
		cout << temp << " ";
	A=A->next;
	}
}
*/
//Інтеграл з межами
/*double gorner(double* A, int n, double x)
{
	double Sum=A[0];
	for(int i(0); i < n; ++i)
		Sum = Sum*x+A[i+1];
	return Sum;
}
void main()
{
int n;
double c, d;
cout << "Enter power of polinom: ";
cin >> n;
double *A = new double[n+2];
cout << "Enter limits of integral: ";
cin >> c >> d;
cout << "Enter koef of polinom: ";
for(int i(0); i<n+1; ++i)
{
cout << "Enter A[" << i << "] koef :";
cin >> A[i];
A[i] /= n+1-i;
}
cout << gorner(A,n,d)-gorner(A,n,c);
system("pause");
}*/
//Обчислити Н100

void main()
{
double a, b;
int n;
cout << "Enter a, b: ";
cin >> a >> b;
double *H0 = new double[1];
H0[0] = 5;
double *H1 = new double[2];
H1[0] = b;
H1[1] = a;
cout << "Enter n: ";
cin >> n;
for(int i(2); i <=n ;++i)
{
	double *H2 = new double[i+1];
	for(int j(0); j<i+1;++j)
	{
		H2[j] = 0;
	}
	for(int j = 1; j<i+1;++j)
	{H2[j] = H1[j-1];}
	for(int j =0; j<i-1;++j)
	{H2[j] +=H0[j];}
	delete[]H0;
	H0 = H1;
	H1 = H2;
}
for(int i = n; i >=0; i--)
{
	if(H1[i]!=0)
	{
		if(i>0)
			cout << H1[i] << "*x^" << i << "+";
		else
			cout << H1[i] << endl;
	}
}
system("pause");
}
//Кількість слів у файлі
/*
void main() 
{ 
setlocale(LC_ALL, "rus"); 

const int max = 1024; 
char words[max]; 

ifstream file("file.txt"); 

int count = 0; 

if (!file.is_open()) 
{ 
cout << "Error(File isn`t open)" << endl; 
} 
while (file >> words) 
{ 
strtok(words, ",./n /t1234567890"); 
for (int i = 0; i < strlen(words); i++) 
{ 
if (isalpha(words[i])) 
{ 
count++; 
break; 
} 
} 
} 
file.close(); 
cout << "Words: " << count << " in file!" << endl; 
system("pause"); 
}*/