#ifndef _MalFormedData_H_
#define _MalFormedData_H_

#include "MyException.h"

class MalFormedData
	:public MyException
{
public:
	MalFormedData();

};

inline MalFormedData::MalFormedData()
	:MyException("음수는 잘못된 숫자이다.")
{
}

#endif // !_MalFormedData_H_
