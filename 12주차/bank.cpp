#include <iostream>
#include "Account.h"
#include "MalFormedData.h"
#include "BalanceOutOfBoundsException.h"

using std::cout;
using std::endl;

int main(void)
{
	Account a(11, "test", 0);
	cout << "deposite 테스트" << endl;
	try
	{
		a.deposit(100);
		a.check();
	}
	catch (MalFormedData& e)
	{
		e.printError();
	}
	try
	{
		a.deposit(-1);
	}
	catch (MalFormedData& e)
	{
		e.printError();
	}

	cout << "\nwithdraw test" << endl;
	try
	{
		a.withdraw(10);
		a.check();
	}
	catch (MalFormedData& e)
	{
		e.printError();
	}
	catch (BalanceOutOfBoundsException& e)
	{
		e.printError();
	}
	// 음수
	try
	{
		a.withdraw(-100);
		a.check();
	}
	catch (MalFormedData& e)
	{
		e.printError();
	}
	catch (BalanceOutOfBoundsException& e)
	{
		e.printError();
	}
	//보다 큰수
	try
	{
		a.withdraw(1000);
		a.check();
	}
	catch (MalFormedData& e)
	{
		e.printError();
	}
	catch (BalanceOutOfBoundsException& e)
	{
		e.printError();
	}


	return 0;
}