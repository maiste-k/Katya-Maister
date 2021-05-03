// Функции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    /*int result;
    result = a + b;

    return result;*/

    return a + b;

}


int main()
{
    setlocale(LC_ALL, "rus");
    
    int s = 10;
    int g = 11;

   
    cout << sum(s, g) << endl;

}


