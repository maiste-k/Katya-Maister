// ОКМП Курсовая.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

/*int sum(float out)
{
    
return sum(out);
}
*/


int main()
{
    setlocale(LC_ALL, "rus");

    float arr1x[20]= { 6, 7, 14, 12, 4, 1, 11, 17, 18, 5, 15, 19, 6, 2, 8, 13, 9, 16, 3, 10 };
    float arr1y[20]= { 18, 11, 3, 14, 6, 19, 7, 8, 13, 2, 9, 16, 15,17, 5, 12, 4, 20, 18, 1 };
    

    char arrComputer[20] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T' };
    float arrComputerSum[20];

   float i, k, j;
    int A;
    float sum;
    sum = 0;
   

    for (int i = 0; i < 20; i++)
    {
        float out = sqrt((arr1x[0] -arr1x[i]) * (arr1x[0] - arr1x[i]) + (arr1y[0] - arr1y[i]) * (arr1y[0] - arr1y[i])); 
         sum += out;
       
        
        for (int i = 0; i < 20; i++)
        {
            arrComputer[i] = sum;
        }
        
    }

    cout << "Суммарное растояние от главного компьютера A до остальных: " << sum << endl;
   
    for (int i = 1; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;

    }

    cout << "Суммарное растояние от главного компьютера B до остальных: " << sum << endl;
    
    for (int i = 2; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера C до остальных: " << sum << endl;

    for (int i = 3; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера D до остальных: " << sum << endl;

    for (int i = 4; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера E до остальных: " << sum << endl;

    for (int i = 5; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера F до остальных: " << sum << endl;


    for (int i = 6; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера G до остальных: " << sum << endl;


    for (int i = 7; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера H до остальных: " << sum << endl;


    for (int i = 8; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера I до остальных: " << sum << endl;

    for (int i = 9; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера J до остальных: " << sum << endl;

    for (int i = 10; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера K до остальных: " << sum << endl;


    for (int i = 11; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера L до остальных: " << sum << endl;

    for (int i = 12; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера M до остальных: " << sum << endl;

    for (int i = 13; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера N до остальных: " << sum << endl;

    for (int i = 14; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера O до остальных: " << sum << endl;

    for (int i = 15; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера P до остальных: " << sum << endl;

    for (int i = 16; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера Q до остальных: " << sum << endl;


    for (int i = 17; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера R до остальных: " << sum << endl;

    for (int i = 18; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера S до остальных: " << sum << endl;

    for (int i = 19; i < 20; i++)
    {
        float out = sqrt((arr1x[1] - arr1x[i]) * (arr1x[1] - arr1x[i]) + (arr1y[1] - arr1y[i]) * (arr1y[1] - arr1y[i]));
        sum += out;
    }
    cout << "Суммарное растояние от главного компьютера T до остальных: " << sum << endl;


    /*float arrComputerSum[20];
    */
   /*for (int i = 0; i < 20; i++)
    {
        arrComputer[i] = sum;
    }  
    */

    cout << arrComputer << endl;
}



