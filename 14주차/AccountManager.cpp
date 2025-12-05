#include "AccountManager.h"
#include "Account.h"
#include "CheckingAccount.h"
#include "CheckingTrafficCardAccount.h"
#include "CreditLineAccount.h"
#include "MalFormedData.h"
#include "BalanceOutOfBoundsException.h"
#include "CheckInformation.h"
#include <iostream>
#include "Menu.h"


void AccountManager::createAccount()
{
	std::cout << "[계좌 개설]" << std::endl;
	std::cout << "1. 보통예금 계좌" << std::endl;
	std::cout << "2. 체크카드 계좌" << std::endl;
	std::cout << "3. 교통체크카드 계좌" << std::endl;
	std::cout << "4. 신용한도 계좌" << std::endl;

	int a = Menu::InputMenu();

	string password;
	int acc = int(accVec.size()) + 1;
	string name;
	int bal = 100; // 무난한 테스트를 위한 초기 잔액 설정

	// 기본정보 입력
	std::cout << "기본 정보 입력" << std::endl;
	std::cout << "이름: ";
	std::cin >> name;
	std::cout << "계좌 비밀번호: ";
	std::cin >> password;


	switch (a)
	{
	case 1:
	{
		Account* accPtr = new Account(acc, name, bal, password);
		accVec.push_back(*accPtr);
		std::cout << "보통예금 계좌가 개설되었습니다." << std::endl;
		break;
	}
	case 2:
	{
		string cardNo;
		std::cout << "체크카드 이름: ";
		std::cin >> cardNo;
		Account* accPtr = new CheckingAccount(acc, name, bal, cardNo, password);
		accVec.push_back(*accPtr);
		std::cout << "체크카드 계좌가 개설되었습니다." << std::endl;
		break;
	}
	case 3:
	{
		string cardNo;
		std::cout << "교통체크카드 이름: ";
		std::cin >> cardNo;
		Account* accPtr = new CheckingTrafficCardAccount(acc, name, bal, cardNo, password);
		accVec.push_back(*accPtr);
		std::cout << "교통체크카드 계좌가 개설되었습니다." << std::endl;
		break;
	}
	case 4:
	{
		Account* accPtr = new CreditLineAccount(acc, name, bal, password);
		accVec.push_back(*accPtr);
		std::cout << "신용한도 계좌가 개설되었습니다." << std::endl;
		break;
	}
	}
}

int AccountManager::Search(int accountNo)
{
	for (size_t i = 0; i < accVec.size(); i++)
	{
		if (accVec[i].getAccountNo() == accountNo)
		{
			return i;
		}
	}
	return -1;
}

int AccountManager::deposit(int accountNo)
{
	int idx = Search(accountNo);
	if (idx == -1)
	{
		std::cout << "계좌를 찾을 수 없습니다." << std::endl;
		return -1;
	}
	int amount;
	std::cout << "입금할 금액: ";
	std::cin >> amount;
	try
	{
		accVec[idx].deposit(amount);
	}
	catch (MalFormedData& e)
	{
		return -1;
	}
	return 0;
}

int AccountManager::withdraw(int accountNo)
{
	int idx = Search(accountNo);
	if (idx == -1)
	{
		std::cout << "계좌를 찾을 수 없습니다." << std::endl;
		return -1;
	}
	int amount;
	std::cout << "출금할 금액: ";
	std::cin >> amount;
	try
	{
		int withdrawn = accVec[idx].withdraw(amount);
		std::cout << withdrawn << "원 출금 완료" << std::endl;
		std::cout << "현재 잔액: " << accVec[idx].getBalance() << "원" << std::endl;
	}
	catch (MalFormedData& e)
	{
		return -1;
	}
	catch (BalanceOutOfBoundsException& e)
	{
		return -1;
	}
	return 0;
}

void AccountManager::DisplayAll(void)
{
	for (size_t i = 0; i < accVec.size(); i++)
	{
		accVec[i].check();
	}
}

void AccountManager::DisplayOne(int accountNo)
{
	int idx = Search(accountNo);
	if (idx == -1)
	{
		std::cout << "계좌를 찾을 수 없습니다." << std::endl;
		return;
	}
	accVec[idx].check();
}

void AccountManager::CloseAccount(void)
{
	int accountNo;
	std::cout << "해지할 계좌 번호: ";
	std::cin >> accountNo;
	int idx = Search(accountNo);
	if (idx == -1)
	{
		std::cout << "계좌를 찾을 수 없습니다." << std::endl;
		return;
	}
	accVec.erase(accVec.begin() + idx);
	std::cout << "계좌가 해지되었습니다." << std::endl;
}