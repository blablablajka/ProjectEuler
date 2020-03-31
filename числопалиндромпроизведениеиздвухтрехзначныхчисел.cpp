/*
Число-палиндром с обеих сторон (справа налево и слева направо) читается одинаково. Самое большое число-палиндром, полученное умножением двух двузначных чисел – 9009 = 91 × 99.

Найдите самый большой палиндром, полученный умножением двух трехзначных чисел.

Answer: 906609

*/

// Замечание 1: Иногда в зависимости от строения цикла нужно смотреть больше ли нынешнее число числа в цикле
// Замечание 2: Функция палиндром это одна строка:
//    if (std::equal(str.cbegin(), str.cbegin() + str.size() / 2, str.crbegin())) {
//        return 1;
//    }
// Замечание 3: Функция палиндром сравнивает перевернутую строку с исходной и если они равны,то строка или число палиндром


#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int isPalindrom(int b)
{
    string str = to_string(b);

    if (std::equal(str.cbegin(), str.cbegin() + str.size() / 2, str.crbegin())) {
        return 1;
    }
    else
    {
        return 0;
    }
}



int main()
{
    int a = 0;
    for(int i = 100; i <= 999; i++)
    {
        for(int ii = 100; ii <= 999; ii++)
        {
            if (isPalindrom((i*ii)) == 1)
            {
                if(i*ii > a)
                {
                    a = i*ii;
                }
            }
        }
    }
    cout<<a;
}

