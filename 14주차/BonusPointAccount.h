#ifndef _BonusPointAccount_H_
#define _BonusPointAccount_H_

#include "Account.h"


class BonusPointAccount
	:public Account
{
private:
	double bonusPoint;
public:
	BonusPointAccount(int, string, int, string);
	int deposit(int);
	void check();
};
inline BonusPointAccount::BonusPointAccount(int acc, string name, int bal, string psw)
	:Account(acc, name, bal, psw), bonusPoint(0)
{

}

#endif // !_BonusPointAccount_H_
