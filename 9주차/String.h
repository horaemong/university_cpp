#ifndef _String_H_
#define _String_H_
//#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include <ostream>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

class String
{
private:
	int m_nLen;
	char* m_pStr;
public:
	String(const char*);
	String();
	friend std::ostream& operator<<(std::ostream& os, const String& rightHand);
	String& operator=(const String& ch);
	String operator+(const String& ch1);
	bool operator==(const String& ch1);
	bool operator==(const char *ch1);
	int length();
};

inline String::String(const char *ch)
{

	m_nLen = strlen(ch)+1;
	m_pStr = new char[m_nLen + 1];
	strcpy_s(m_pStr,m_nLen, ch);
}

inline String::String() :String("")
{
	
}


#endif // !_String_H_
