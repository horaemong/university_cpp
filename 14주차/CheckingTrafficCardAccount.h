#ifndef _CheckingTrafficCardAccount_H_
#define _CheckingTrafficCardAccount_H_

#include "CheckingAccount.h"

class CheckingTrafficCardAccount 
	:public CheckingAccount
{
private:
	bool hasTrafficCard = true;
public:
	CheckingTrafficCardAccount(int, const char*, int, const char*);
	int payTrafficCard(const char*, int);
};

inline CheckingTrafficCardAccount::CheckingTrafficCardAccount(int acc, const char* name, int bal, const char* card)
	:CheckingAccount(acc, name, bal, card)
{
}
#endif // !_CheckingTrafficCardAccount_H_

