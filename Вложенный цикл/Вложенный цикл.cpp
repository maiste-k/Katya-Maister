// Вложенный цикл.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Написать программу, которая выводит на экран прямоугольник символом *. Высота и ширина задаётся пользователем.*/



#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	(char)'*';
	int  height;
	int widht;

	cout << "Задайте высоту прямоугольника -> ";
	cin >> height;

	cout << "Задайте ширину прямоугольника -> ";
	cin >> widht;

	for (int j = 0; j < height; j++)
	{

		for (int i = 0; i < widht; i++)
		{
			cout << "*";
		}
		cout << endl;
	}



}