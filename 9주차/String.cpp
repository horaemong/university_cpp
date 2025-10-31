#include "String.h"
#include <cstring>


std::ostream& operator<<(std::ostream& os, const String& rightHand)
{
    os << rightHand.m_pStr;
    return os;
}

String& String::operator=(const String& ch)
{
    this->m_nLen = ch.m_nLen;
    delete[] this->m_pStr;
    this->m_pStr = new char[m_nLen + 1];

    strcpy_s(this->m_pStr, m_nLen, ch.m_pStr);

    return *this;
}

String String::operator+(const String& ch1)
{
    
    String a = this->m_pStr;
    
    return strcat(a.m_pStr, ch1.m_pStr);
}

bool String::operator==(const String& ch1)
{
    if (strcmp(this->m_pStr, ch1.m_pStr) == 1)
    {
		return false;
    }
    else
    {
        return true;
    }
    
}

bool String::operator==(const char* ch1)
{
    if(strcmp(this->m_pStr, ch1) == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

char& String::operator[](int i)
{
    return m_pStr[i];
}


int String::length()
{
    return m_nLen-1;
}