// Параметры по умолчанию. Передача аргументов в функцию.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

/*void  foo (int a)
{

	for ( int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
}


int main()
{
	foo(10);
}

*/


/*void foo(int a=5)
{
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
}

int main()
{
	foo();
}
*/

/*void foo(int a = 5, double b= 0.5)
{
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
}

int main()
{
	foo(20, 4.5);
}
*/

/*void foo(int a = 5, double b = 0.5, int q)*/ //нельзя указывать параметр без значения в конце

void foo(int q, int a = 5, double b = 0.5)
{
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
}

int main()
{
	foo(20);
}
