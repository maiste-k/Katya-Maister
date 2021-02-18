/*Заполнить массив случайными числами. Генератор уникальных случайных чисел. rand/srand */

#include <iostream>
#include<ctime>
using namespace std;

/*Заполнить массив уникальными случайными числами*/

int main()
{
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	bool hasAlready;

	for (int i = 0; i < SIZE; )
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
		cout<< arr[i]<< endl;
	}

} 