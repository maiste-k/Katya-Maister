// Прототип функции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

void foo(int a, int b);

int main()
{
    setlocale(LC_ALL, "rus");
    foo(3, 4);
}

void foo(int a, int b)
{
    cout << "Я функция меня вызвали!!!" << endl;
}
