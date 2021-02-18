/*Заполнить массив случайными числами. Генератор уникальных случайных чисел. rand/srand */

#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	setlocale (LC_ALL, "rus");

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
