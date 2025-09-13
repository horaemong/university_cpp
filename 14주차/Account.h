#ifndef _Account_H_
#define _Account_H_

#include <string>
using std::string;

class Account 
{
private:
	int accountNo;
	string name;
	int balance;
	string password;
	bool isLogin = false;
public:
	Account(int, string, int, string);
	bool getIsLogin();
	void deposit(int);
	int withdraw(int);
	void check();
	void checkPassword(string);
	int getBalance();
	int setBalance(int);
};

inline Account::Account(int acc, string n, int bal, string psw)
{
	accountNo = acc;
	name = n;
	balance = 0;
	password = psw;
}

#endif // !_Account_H_

