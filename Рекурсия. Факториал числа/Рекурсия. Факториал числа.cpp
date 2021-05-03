// Рекурсия. Факториал числа.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int Fact(int N)
{
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;
	return N * Fact(N - 1);


}

int main()
{
	cout <<  Fact(3) << endl ;

}

/*
Проверка
3*2!
2! = 2* 1!
2!= 2
3*2 = 6
*/