#include "CheckingAccount.h"
#include <iostream>

int CheckingAccount::pay(const char* card, int amount)
{
	if (strcmp(this->cardNo, card) != 1)
	{
		std::cout << "카드번호가 일치합니다. " << amount<< "원 지불합니다." << std::endl;
		withdraw(amount);
		return amount;
	}
	else
	{
		std::cout << "카드번호가 불일치합니다. 거래를 종료합니다." << std::endl;
		return 0;
	}
}