// While.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Разработать программу, которая выводит на экран линию из символов.
Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь. */

#include <iostream>

using namespace std;

int main()
{

	setlocale(LC_ALL, "RUS");

	int index = 0;
	int count;
	cout << " Введите число символов: ";
	
	cin >> count;

	char symbol;
	cout << " Впишите любой символ: ";
		
	cin >> symbol;

	int line;

	cout << " Введите тип линии: " << endl <<
		" 1.Вертикальная " << endl <<
		" 2.Горизонтальная " << endl <<
		" Ваш выбор: ";

	cin >> line;

	if (line != 1 && line != 2)
	{
		cout << " Неккоректный выбор! " << endl;
	
	}



	while (index < count)
	{
		

		if (line == 1)
		{
			cout << symbol << endl;

		}

		if (line == 2)
		{
			cout << symbol;

		}
		
		index++;
		
		

	}
	cout << endl << endl;
}


