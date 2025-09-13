#ifndef _CheckPassword_H_
#define _CheckPassword_H_
#include "MyException.h"

class CheckPassword
	:public MyException
{
public:
	CheckPassword();

};

inline CheckPassword::CheckPassword()
	:MyException("잘못된 비밀번호")
{
}
#endif // !_CheckPassword_H_

