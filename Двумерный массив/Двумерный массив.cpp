// Двумерный массив.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int ROWS = 5;
	const int COLS = 8;

	int arr[ROWS][COLS];

	for ( int i = 0; i < ROWS; i++)
	{
		for (int  j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{

		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;

	}
}