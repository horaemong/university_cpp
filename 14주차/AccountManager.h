#ifndef _AccountManager_H_
#define _AccountManager_H_
#include "Account.h"
#include <vector>

using std::vector;

class AccountManager
{
private:
	vector<Account> accVec;
	int Search(int);

public:
	~AccountManager();
	void createAccount();
	int deposit(int);
	int withdraw(int);
	void DisplayAll(void);
	void DisplayOne(int);
	void CloseAccount(void);
};

inline AccountManager::~AccountManager()
{
	vector<Account>::iterator it;
	for (it = accVec.begin(); it != accVec.end(); it++)
	{
		accVec.erase(it);
	}
}
#endif // !_AccountManager_H_
