#include "Account.h"
#include "BalanceOutOfBoundsException.h"
#include "MalFormedData.h"
#include "CheckPassword.h"
#include <iostream>

void Account::deposit(int amount)throw (MalFormedData)
{
	if (amount < 0)
	{
		throw MalFormedData();
	}
	if (amount >= 0)
	{
		setBalance(amount);
		std::cout << amount << "원 입금되었습니다." << std::endl;
	}
}

int Account::withdraw(int amount) throw(MalFormedData, BalanceOutOfBoundsException)
{
	if (amount < 0)
	{
		throw MalFormedData();
	}
	if (amount > balance)
	{
		throw BalanceOutOfBoundsException();
	}
	if (amount <= balance)
	{
		setBalance(-amount);
		return amount;
	}
}

void Account::check()
{
	std::cout << "계좌번호 " << accountNo << "번, " << name << "님의 남은 잔액은 " << balance << "원 입니다." << std::endl;
}

void Account::checkPassword(string psw) throw (CheckPassword)
{
	if (psw == password)
	{
		isLogin = true;
	}
	else
	{
		throw CheckPassword();
	}
}

bool Account::getIsLogin()
{
	return isLogin;
}

int Account::getBalance()
{
	return balance;
}

int Account::setBalance(int a)
{
	balance = balance + a;
	return balance + a;
}