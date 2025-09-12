#ifndef _Account_H_
#define _Account_H_
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include <cstring>

class Account {
private:
	int account;
	char* name;
	int balance;
public:
	Account();
	Account(int, const char*, int);
	~Account();
	void deposit(int amount);
	int withdraw(int amount);
	void check();
	int getBalance();
	int setBalance(int);
};

inline Account::Account()
{
	account = 0;
	strcpy(name,"null");
	balance = 0;
}

inline Account::Account(int a, const char* b, int c)
{
	name = new char[strlen(b)+1];
	account = a;
	strcpy(name, b);
	balance = c;
}

inline Account::~Account()
{
	delete[] name;
}
#endif // !_Account_H_
