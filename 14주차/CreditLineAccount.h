#ifndef _CreditLineAccount_H_
#define _CreditLineAccount_H_

#include "Account.h"

class CreditLineAccount
	:public Account
{
private:
	int creditLine;
public:
	CreditLineAccount(int, const char*, int, int);
	void withdraw(int);
};

inline CreditLineAccount::CreditLineAccount(int acc, const char* name, int bal, int credit)
	:Account(acc, name, bal), creditLine(credit)
{}
#endif // !_CreditLineAccount_H_
