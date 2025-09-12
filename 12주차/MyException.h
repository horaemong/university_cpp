#ifndef _MyException_H_
#define _MyException_H_

#include <string>
using std::string;

class MyException
{
protected:
	string msg;
public:
	MyException(string);
	string getMessage();
	void printError();
};

inline MyException::MyException(string str)
{
	msg = str;
}
#endif // !_MyException_H_

