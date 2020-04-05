//Author: Mike Zhukov
/*
Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
*/


#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
  string s;
  ifstream file("/home/user/Изображения/dateforsolution.txt");
  BigInt big1 = 0;
  BigInt bigres = 0;
  while(getline(file, s))
  {
      big1 = s -'0';
      bigres += big1;
  }
  file.close();

  cout<<(bigres.to_string()).substr(0,10);
}
