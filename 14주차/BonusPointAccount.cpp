#include "BonusPointAccount.h"
#include <iostream>
#include "MalFormedData.h"

int BonusPointAccount::deposit(int amount) throw (MalFormedData)
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
