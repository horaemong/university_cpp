#ifndef _CheckingAccount_H_
#define _CheckingAccount_H_

#include "Account.h"
class CheckingAccount :public Account
{
private:
	char* cardNo;
public:
	CheckingAccount(int, const char*, int, const char*);
	~CheckingAccount();
	int pay(const char*, int);
};

inline CheckingAccount::CheckingAccount(int acc, const char* name, int bal, const char* card)
	:Account(acc, name, bal)
{
	cardNo = new char[strlen(card) + 1];
	strcpy(cardNo, card);
}

inline CheckingAccount::~CheckingAccount()
{
	delete[] cardNo;
}

#endif // !_CheckingAccount_H_

