// Арифметика указателей.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
 
using namespace std;

int main()
{
	const int SIZE = 5;
	int arr[SIZE]{ 4, 5, 55, 97, 1 };

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "=========" << endl;



	/*Имя масива - это указатель на его первый элемент*/
	int *pArr = arr;

	for (int i = 0; i < SIZE; i++)
	{
		cout << pArr[i] << endl;
	}
}

