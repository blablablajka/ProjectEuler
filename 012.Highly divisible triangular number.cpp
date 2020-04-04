
/*
Author: Mike Zhukov
Последовательность номеров треугольников генерируется путем сложения натуральных чисел. Таким образом, номер 7- го треугольника будет 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. Первые десять слагаемых будут:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Перечислим факторы первых семи треугольных чисел:

 1 : 1
 3 : 1,3
 6 : 1,2,3,6
10 : 1,2,5,10
15 : 1,3,5,15
21 : 1,3,7,21
28 : 1,2, 4,7,14,28
Мы можем видеть, что 28 - это первое число треугольника, имеющее более пяти делителей.

Каково значение первого треугольного числа, имеющего более пятисот делителей? 
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>

using namespace std;
typedef unsigned long long int ull;

int Count(int number) {
    int nod = 0;
    int sqrtt = sqrt(number);
    for(int i = 1; i <= sqrtt; i++){
        if(number % i == 0){
            nod += 2;
        }
    }
    if (sqrtt * sqrtt == number) {
        nod--;
    }

    return nod;
}

int main()
{
  ull solve = 0;
  for(ull i = 0; i < 10000000;i++)
  {
      solve += i;
      cout<<solve<<" : "<<"\n";
      if(Count(solve) > 500){
        cout<<"Answer "<<solve;
        break;
      }
  }
}
