#include "Menu.h"
#include <iostream>

void Menu::ShowMenu()
{
	std::cout << "-----메뉴 선택-----" << std::endl;
	std::cout << "1. 계좌 개설" << std::endl;
	std::cout << "2. 입금" << std::endl;
	std::cout << "3. 출금" << std::endl;
	std::cout << "4. 전체 계좌 정보 출력" << std::endl;
	std::cout << "5. 특정 계좌 정보 출력" << std::endl;
	std::cout << "6. 계좌 해지" << std::endl;
	std::cout << "7. 종료" << std::endl;
	std::cout << "------------------" << std::endl;
}

int Menu::InputMenu()
{
	int a;
	std::cout << "선택: ";
	std::cin >> a;
	std::cout << std::endl;
	return a;
}

void Menu::ChoiceMenu(int ch)
{
	switch (ch)
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	case 6:

		break;
	case 7:

		break;
	default:

		break;
	}
}
