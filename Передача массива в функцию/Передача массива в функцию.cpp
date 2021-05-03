// Передача массива в функцию.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void FillArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

}

int main()
{
    const int SIZE = 10;

    int arr[SIZE];
	FillArray(arr, SIZE);
	PrintArray (arr, SIZE);
}


