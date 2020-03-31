// Creator of Solution on C++: Zhukov Mike 

/* 
Если мы перечислим все натуральные числа ниже 10, кратные 3 или 5, мы получим 3, 5, 6 и 9. Сумма этих кратных равна 23.

Найти сумму всех кратных 3 или 5 ниже 1000.
ANSWER: 233168
*/


#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i1 = 0;
    for(int i = 0; i < 1000; i++)
    {
        if(i % 5 == 0 || i % 3 == 0)
        {

        i1+=i;

        }
    }
    cout<<i1;
}
