#include<iostream>
#include"FruitBuyer.h"
#include"FruitSeller.h"
using std::cout;
using std::endl;

int FruitBuyer::BuyApple(int m, FruitSeller &seller) {
	// 사과장수와 상호작용

	seller.SaleApple(m);

	// 내 돈 계산
	const int APPLE_UNITCOST = 1000;

	int num = m / APPLE_UNITCOST;

	numOfApple += num;
	money -= m;

	

	return num;
}

void FruitBuyer::ShowResult()
{
	cout << "내 사과: " << numOfApple << endl;
	cout << "남은 돈: " << money << "원\n" << endl;	

}