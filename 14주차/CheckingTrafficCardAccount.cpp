#include "CheckingTrafficCardAccount.h"
#include <iostream>

int CheckingTrafficCardAccount::payTrafficCard(const char* card, int amount)
{
	if (hasTrafficCard)
	{
		std::cout << "교통카드 기능이 있습니다." << std::endl;
		return pay(card, amount);
	}
	else
	{
		std::cout << "교통카드 기능이 없습니다." << std::endl;
		return 0;
	}
}