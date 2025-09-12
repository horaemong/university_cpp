#include "CreditLineAccount.h"
#include <iostream>

void CreditLineAccount::withdraw(int minus) 
{
	if (creditLine+getBalance() <=minus)
	{
		setBalance(-minus);
	}
	else
	{
		std::cout << "ÀÜ¾× ºÎÁ·" << std::endl;
	}
}
