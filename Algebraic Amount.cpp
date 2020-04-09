#include<cmath>
#include <iostream>

using namespace std;

int main(){
   int N,K, res = 0;
   cout<<"Введите N: ";
   cin>>N;
   cout<<"Введите степень K: ";
   cin>>K;
   cout<<"Сумма: ";
   for(int i = 1; i <= N; i++)
   {
       res += pow(i,K);
   }
   cout<<res;
}
