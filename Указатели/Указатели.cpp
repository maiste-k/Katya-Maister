// Указатели.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    cout << "a\t" << a << endl;
   

    int *px= &a;
    int* px2 = &a;

    /*Разыминование

    cout << px << endl;
    cout << *px << endl;
    */
   

    /*Добавим второй указатель*/
    cout << "px\t "  << px << endl;
    cout << "px2\t " << px << endl;

    *px = 2;
    cout << "a\t" << a << endl;
    cout << "px\t" << *px << endl;

}


