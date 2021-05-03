// Шаблоны функций.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

/*
template <typename T> 
T Sum(T a, T b)

{
    return a + b;
}


int main()
{

    setlocale(LC_ALL, "rus");
   
    cout << Sum(1.2, 3.4) << endl;
}

*/


/*
template <typename T1, typename T2>
T2 Sum(T1 a, T2 b)
{
    return a + b;

}

int main()
{
    cout << Sum(3, 5.3) << endl;
}
*/

//необходимо не забывать менять ТИПЫ

/*
template <typename T1, typename T2>
T1 Sum(T1 a, T2 b)
{
    return a + b;

}

int main()
{
    cout << Sum (5.3, 3) << endl;
}
*/

/*
template <typename T1, typename T2> 
int Sum(T1 a, T2 b)
{
    cout << a << endl;
    cout << b << endl;
    return 0;
}

int main()
{
    setlocale(LC_ALL, "rus");
    Sum(10, "переменная"); //так как "5" это число, а "переменная" - это слово, мы должны прописать второй ТИП
}
*/



//typename T, можно заменить class T
template <class T>
int Sum(T a )
{
    cout << a << endl;
    return 0;
  
}

int main()
{
    setlocale(LC_ALL, "rus");
    Sum(10);
}
    

//но нельзя смешивать template <typename T, class T1>