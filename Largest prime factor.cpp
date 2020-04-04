// Author : Zhukov Mike

/*

Простые делители числа 13195 - это 5, 7, 13 и 29.

Каков самый большой делитель числа 600851475143, являющийся простым числом?

Answer: 6857

*/

// Заметка 1: Чтобы найти простые числа какого-то числа нужно идти от 1 до квадратного корня этого числа. Тем самым мы уменьшаем отрезок чисел
// Заметка 2: Если мы используем несколько if, то тогда мы можем сократить их до одного используя &&
// Заметка 3: Если в if мы используем функцию без операторов (==, !=, >, <), то автоматически подставляется == 1.
// Ex: if (isPrime()) - тут автоматически подставляется == 1

#include <stdio.h>
#include <math.h>

int isPrime(unsigned long long int num) {
  if (num % 2 == 0 || num % 5 == 0 || num % 10 == 0) {
    return 0;
  }

  unsigned long long int sqrtNum = sqrt(num);

  for (unsigned long long int i = 3; i <= sqrtNum; i += 2) {
    if (num % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {

  unsigned long long int num = 5000003441;
  unsigned long long int bgP = 0;

  for (unsigned long long int i = num; i > 1; i--) {
    if (num % i == 0 && isPrime(i)) {
      bgP = i;
      break;
    }
  }

  printf("%llu\n", bgP);
  return 0;
}
