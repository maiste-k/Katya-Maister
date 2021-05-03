// Передача аргументов в функции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int Foo(int a)
{
	return ++a;
}

int main()
{
	int value = 1;

	Foo(value);
	value = Foo(value);
	cout << value << endl;

}

