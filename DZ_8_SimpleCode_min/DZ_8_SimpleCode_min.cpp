// DZ_8_SimpleCode_min.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Заполнить массив уникальными случайными числами, а затем найти минимальное числомассива. */

#include <iostream>
#include<ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	bool hasAlready;

	for (int i = 0; i < SIZE;)
	{
		hasAlready = false;
		int newRandomValue = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRandomValue)
			{
				hasAlready = true;
				break;
			}
		}

		if (!hasAlready)
		{
			arr[i] = newRandomValue;
			i++;
		}

	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	// ищем минимальный число массива

	int min;
	min = arr[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	cout << "Наименьшее число массива: " << min << endl;


}

