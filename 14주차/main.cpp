#include <iostream>
//#include "Account.h"
//#include "CheckingAccount.h"
//#include "CheckingTrafficCardAccount.h"
//#include "CreditLineAccount.h"
//#include "BonusPointAccount.h"
#include "AccountManager.h"
#include "Menu.h"
//#include "MalFormedData.h"
//#include "BalanceOutOfBoundsException.h"
//#include "CheckInformation.h"

int main(void)
{
	AccountManager accMgr;

	int choice;

	do {
		Menu::ShowMenu();
		choice = Menu::InputMenu();

		switch(choice)
		{
			case 1:
				accMgr.createAccount();
				break;
			case 2:
			{
				int accNo;
				std::cout << "입금할 계좌번호: ";
				std::cin >> accNo;
				accMgr.deposit(accNo);
				break;
			}
			case 3:
			{
				int accNo;
				std::cout << "출금할 계좌번호: ";
				std::cin >> accNo;
				accMgr.withdraw(accNo);
				break;
			}
			case 4:
				accMgr.DisplayAll();
				break;
			case 5:
			{

				int accNo;
				std::cout << "조회할 계좌번호: ";
				std::cin >> accNo;
				accMgr.DisplayOne(accNo);
				break;
			}
			case 6:
				accMgr.CloseAccount();
				break;
		}

	} while (choice != 7);

	return 0;
}