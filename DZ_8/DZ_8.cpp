// DZ_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Найти минимальный элемент массива. Поиск минимального элемента в массиве. ДЗ#8.*/

#include <iostream>
#include<ctime>
using namespace std;

/*Заполнить массив уникальными случайными числами, а затем найти минимальный индекс массива. */

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
	
	// ищем минимальный элемента массива

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





