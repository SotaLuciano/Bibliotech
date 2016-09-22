
template <class T>
void D(T a, T b, T c)
{
	T D, x1, x2, x;
	D = b*b - 4*a*c;
	cout << "D =" << D << endl;
	if(D == 0)
	{x = (-b)/(2*a);
	cout << "\n X = " << x;	
	cout << "----------------------------" << endl;
	}
	else if(D < 0)
		{cout << "\nD < 0" << endl;
		cout << "----------------------------" << endl;
	}
	else
	{
	x1 = (-b + sqrt(D))/(2*a);
	x2 = (b + sqrt(D))/(2*a);
	cout << "\n x1 =" << x1 << "\n x2 =" << x2 << endl;
	cout << "----------------------------" << endl;
	}	
	
}