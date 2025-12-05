#ifndef _CheckingTrafficCardAccount_H_
#define _CheckingTrafficCardAccount_H_

#include <string>
using std::string;
#include "CheckingAccount.h"

class CheckingTrafficCardAccount 
	:public CheckingAccount
{
private:
	bool hasTrafficCard = true;
public:
	CheckingTrafficCardAccount(int, string, int, string, string);
	int payTrafficCard(string, int);
};

inline CheckingTrafficCardAccount::CheckingTrafficCardAccount(int acc, string name, int bal, string card, string psw)
	:CheckingAccount(acc, name, bal, card,psw)
{
}
#endif // !_CheckingTrafficCardAccount_H_

