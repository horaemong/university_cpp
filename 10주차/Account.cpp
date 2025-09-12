#include "Account.h"
#include <iostream>

void Account::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
		std::cout <<amount<< "원 입급되어습니다." << std::endl;
	}
	else 
	{
		std::cout << "잘못된 금액" << std::endl;
	}
}

int Account::withdraw(int amount)
{
	if (amount <= balance)
	{
		setBalance(-amount);
		return amount;
	}
	else
	{
		std::cout << "잔액 부족" << std::endl;
		return 0;
	}
}

void Account::check()
{
	std::cout << "계좌번호 " << account << "번, " << name << "님의 남은 잔액은 " << balance << "원 입니다." << std::endl;
}

int Account::getBalance()
{
	return balance;
}

int Account::setBalance(int a)
{
	return balance+a;
}
