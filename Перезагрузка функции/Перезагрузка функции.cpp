// Перезагрузка функции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int Sum(int a, int b, int c)
{
    /*a++;*/
    
    return a + b + c;
}

int Sum(int a, int b)
{
   
    return a + b;
}

double Sum (double a, double b)
{
    cout << "Привет!))" << endl;
    return a + b;

}


int main()
{
    setlocale(LC_ALL, "rus");
    cout << Sum(2.5, 5.5) << endl;
    cout << Sum(2, 3) << endl;
    cout << Sum(1, 8, 7) << endl;
}

