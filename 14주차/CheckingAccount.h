#ifndef _CheckingAccount_H_
#define _CheckingAccount_H_

#include <string>
using std::string;
#include "Account.h"
class CheckingAccount :public Account
{
private:
	string cardNo;
public:
	CheckingAccount(int, string, int, string, string);

	int pay(string, int);
};

inline CheckingAccount::CheckingAccount(int acc, string name, int bal, string card, string psw)
	:Account(acc, name, bal, psw)
{
	cardNo = card;
}


#endif // !_CheckingAccount_H_

