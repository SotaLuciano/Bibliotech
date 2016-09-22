
#pragma region Sorting_Functions

// "Стандартний вибір"
template <typename T>
void BSort(T array[], long size)
{
	bool flag = true;
	long i, j;

	T temp;

	for (j = 1;; j++)
	{
		for (i = 0; i < size - j; i++)
			if (array[i] > array[i + 1])
			{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			flag = false;
			}

		if (flag)
			break;

		flag = true;
	}
}

// Модифікація „човникового” сортування
template <typename T>
void BSort2(T array[], long size)
{
	long i, rezerv;
	T temp;
	i = 0;

	while (i < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			rezerv = i + 1;
			while ((i >= 0) && (array[i] > array[i + 1]))
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				i--;
			}
			i = rezerv;
		}
		else
			i++;
	}
}

// модифікація Шелла "човникового сортування"
long Shell(long k[], long limit)
{
	k[0] = 1;
	int i = 1;
	for (; k[i - 1] < limit; ++i)
		k[i] = k[i - 1] * 3 + 1;

	return --i;
}

template <typename T>
void BSortByShell(long m[], long limit, T array[], long size)
{

	long i, rezerv;

	T temp;

	while (limit >= 0)
	{
		i = 0;

		while (i + m[limit] < size)
		{
			if (array[i] > array[i + m[limit]])
			{
				rezerv = i + 1;

				temp = array[i];
				array[i] = array[i + m[limit]];
				array[i + m[limit]] = temp;

				--i;
				while ((i >= 0) && (array[i] > array[i + 1]))
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;

					i--;
				}
				i = rezerv;
			}
			else
				i++;

		}
		--limit;
	}

}

//BUBLESORT
template <typename T>
void bubbleSort(T* array, long size)
{
    //для швидшого сортування посортованих
    bool wasSwapped = true;
    for (int i = 1; (i <= size) && wasSwapped; ++i)
    {
        wasSwapped = false;
        for (int j = 0; j < (size - i); ++j)
        {
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j + 1]);
                wasSwapped = true;
            }
        }
    }
}

// Quick Sort
template <typename T>
void QSort(T array[], long first, long last)
{
	if (first < last)
	{
		long i;
		long j;
		T temp;
		T point;

		point = array[first];

		i = first;
		j = last;

		while (i < j)
		{
			while (array[i] <= point && i < last)
				i++;
			while (array[j] >= point && j > first)
				j--;

			if (i < j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}


		temp = array[first];
		array[first] = array[j];
		array[j] = temp;

		QSort(array, first, j - 1);
		QSort(array, j + 1, last);
	}
}

#pragma endregion

template <typename T>
void PrintArray(T array[], long size)
{

	long i, j, in;
	cout << "\n\n V masyvi : " << size << "Elementiv \n";

	for (j = 0; j<3; ++j)
	{
		switch (j)
		{
		case 0:  in = 0;
			cout << "\n\n Pochatok : \n";
			break;
		case 1:  in = size / 2 - 5;
			cout << "\n\n Seredyna : \n";
			break;
		case 2:  in = size - 10;
			cout << "\n\n Kinets : \n";
			break;
		}

		for (i = in; i<in + 10; ++i)
		{
			if (i % 5 == 0)
				cout << endl;
			cout << setw(15) << array[i];
		}
	}
}
