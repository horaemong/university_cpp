#ifndef _BalanceOutOfBoundsException_H_
#define _BalanceOutOfBoundsException_H_

#include "MyException.h"

class BalanceOutOfBoundsException
	:public MyException
{
public:
	BalanceOutOfBoundsException();

};

inline BalanceOutOfBoundsException::BalanceOutOfBoundsException()
	:MyException("인출 오류 : 잔액을 초과했습니다.")
{
}

#endif // !_BalanceOutOfBoundsException_H_

