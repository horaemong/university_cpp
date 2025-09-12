#ifndef _BonusPointAccount_H_
#define _BonusPointAccount_H_

#include "Account.h"

class BonusPointAccount
	:public Account
{
private:
	double bonusPoint;
public:
	BonusPointAccount(int, char*, int);
	int deposit(int);
	void check();
};
inline BonusPointAccount::BonusPointAccount(int acc, char* name, int bal)
	:Account(acc, name, bal), bonusPoint(0)
{

}

#endif // !_BonusPointAccount_H_
