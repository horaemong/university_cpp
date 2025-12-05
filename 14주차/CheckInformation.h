#ifndef _CheckInformation_H_
#define _CheckInformation_H_
#include "MyException.h"

class CheckInformation
	:public MyException
{
public:
	CheckInformation();

};

inline CheckInformation::CheckInformation()
	:MyException("잘못된 정보")
{
}
#endif // !_CheckPassword_H_

