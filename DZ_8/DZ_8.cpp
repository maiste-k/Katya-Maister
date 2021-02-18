// DZ_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Найти минимальный элемент массива. Поиск минимального элемента в массиве. ДЗ#8.*/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{

	setlocale(LC_ALL, "rus");

	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];


	bool hasAlready;

	for (int i = 0; i < SIZE;)
	{
		hasAlready = false;
		int newRandomValue = rand() % 20;

		for (int j = 0; j < i; j++)
		{

			if (arr[j] = newRandomValue)
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
}




