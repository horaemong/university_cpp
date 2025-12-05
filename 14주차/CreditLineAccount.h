#ifndef _CreditLineAccount_H_
#define _CreditLineAccount_H_

#include "Account.h"

class CreditLineAccount
	:public Account
{
private:
	int creditLine = 100;
public:
	CreditLineAccount(int, string, int, string);
	void withdraw(int);
};

inline CreditLineAccount::CreditLineAccount(int acc, string name, int bal, string psw )
	:Account(acc, name, bal, psw)
{}
#endif // !_CreditLineAccount_H_
