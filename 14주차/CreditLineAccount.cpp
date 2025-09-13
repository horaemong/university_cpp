#include "CreditLineAccount.h"
#include <iostream>

void CreditLineAccount::withdraw(int minus) 
{
	if (creditLine+getBalance() >=minus)
	{
		setBalance(-minus);
		std::cout << -minus << "원 출금 완료" << std::endl;
		std::cout << "현재 잔액: " << getBalance() << "원" << std::endl;
	}
	else
	{
		std::cout << "잔액 부족" << std::endl;
	}
}
