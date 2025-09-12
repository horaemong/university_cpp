#include "FruitSeller.h"
#include <iostream>

using std::cout;
using std::endl;

int FruitSeller::SaleApple(int m)
{
  const int APPLE_UNITCOST = 1000;

  int num = m / APPLE_UNITCOST;

  numOfApple -= num;
  money += m;

  return num;
}

void FruitSeller::ShowResult()
{
	cout << "내 사과: " << numOfApple << endl;
	cout << "남은 돈: " << money << "원\n" << endl;

}