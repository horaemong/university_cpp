#include "MyException.h"
#include <iostream>

string MyException::getMessage()
{
	return msg;
}

void MyException::printError()
{
	std::cout << getMessage() << std::endl;
}
