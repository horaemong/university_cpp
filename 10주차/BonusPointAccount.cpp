#include "BonusPointAccount.h"
#include <iostream>

int BonusPointAccount::deposit(int amount)
{
	Account::deposit(amount);
	bonusPoint += amount * 1.1;

	return bonusPoint;
}

void BonusPointAccount::check()
{
	Account::check();
	std::cout << "포인트는 " << bonusPoint << "입니다." << std::endl;
}
