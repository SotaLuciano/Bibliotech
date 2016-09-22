template <class T> 
void Arithmetic(T* Array, int N)
{
	T arith = 0;
	for(int i = 0; i < N; ++i)
		arith += Array[i];
	double Res;
	Res = (double)(arith)/N;
	cout << "Result =" << Res << endl;
}
