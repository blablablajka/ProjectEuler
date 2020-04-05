//Author: Mike Zhukov



#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "BigInt.hpp"

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
