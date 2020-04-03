/*
Тройка Пифагора - три натуральных числа a < b < c, для которых выполняется равенство

a2 + b2 = c2
Например, 32 + 42 = 9 + 16 = 25 = 52.

Существует только одна тройка Пифагора, для которой a + b + c = 1000.
Найдите произведение abc.

Answer: 31875000
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <vector>

using namespace std;
typedef long long int ll;

int main()
{
    int res;
    vector<int>pif;
    for(int i = 1; i < 1000; i++)
    {
        for(int ii = 2; ii < 1000; ii++)
        {
            for(int iii = 3; iii < 1000; iii++)
            {
                  if((i*i + ii*ii) == iii*iii && (i + ii + iii) == 1000)
                  {
                       cout<<i<<" + "<<ii<<" = "<<iii<<"\n";
                       cout<<"Triplet " << i << " + " << ii << " + " << iii <<" = 1000 \n";
                       cout<<"Product or Answer "<<i*ii*iii;
                  }
            }
        }
    }
}
