#include<iostream>
#include"FruitBuyer.h"
#include"FruitSeller.h"
using std::cout;
using std::endl;

int FruitBuyer::BuyApple(int m, FruitSeller &seller) {
	// �������� ��ȣ�ۿ�

	seller.SaleApple(m);

	// �� �� ���
	const int APPLE_UNITCOST = 1000;

	int num = m / APPLE_UNITCOST;

	numOfApple += num;
	money -= m;

	

	return num;
}

void FruitBuyer::ShowResult()
{
	cout << "�� ���: " << numOfApple << endl;
	cout << "���� ��: " << money << "��\n" << endl;	

}