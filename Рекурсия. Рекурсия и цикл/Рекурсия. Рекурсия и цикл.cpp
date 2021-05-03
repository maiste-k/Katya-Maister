// Рекурсия. Рекурсия и цикл.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int Foo(int a)
{
    if (a < 1)
        return 0;
    a--;
        cout << a << endl;
        return Foo(a);
        
}



int main()
{
    Foo(5);
}

