#include "Account.h"
#include "CheckingAccount.h"
#include "BonusPointAccount.h"
#include "CheckingTrafficCardAccount.h"
#include "CreditLineAccount.h"
#include <iostream>

using std::cout;
using std::endl;


int main(void)
{
	// test account
	cout << "account class test" << endl;
	Account a(1, "test", 0);

	a.check();
	a.deposit(100);
	a.withdraw(101);
	a.withdraw(10);
	a.check();

	// test CheckingAccount
	cout << "\nCheckingAccount class test" << endl;
	CheckingAccount b(1, "test", 0, "card");
	b.deposit(100);
	b.pay("card", 10);
	b.pay("aaa", 10);

	// test CheckingTrafficAccount
	cout << "\nCheckingTrafficAccount class test" << endl;
	CheckingTrafficCardAccount c(1, "test", 0, "card", true);
	c.deposit(100);
	c.payTrafficCard("card", 10);

	// test CreditLineAccount
	cout << "\nCreditLineAccount class test" << endl;


	return 0;
}