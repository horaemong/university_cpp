

#ifndef _ComplexList_H
#define _ComplexList_H

#include "Complex.h"
#include <iostream>


class ComplexList 
{
private:
	static int counter;

	int length;
	Complex* plist;
public:

	static void setCounter(int);
	ComplexList(ComplexList&);
	ComplexList(int);
	ComplexList();
	~ComplexList();
	void Set(int, double, double);
	Complex& Get(int);
	Complex* pGet(int);
	int Length(void);
};

inline ComplexList::ComplexList(int n)
{
	if (n < 0)
	{
		length = 10;
		plist = new Complex[10];
		std::cout << "잘못된 값. 기본값으로 초기화\n";
		std::cout << "\n" << plist << std::endl;
	}
	else
	{
		plist = new Complex[n];
		length = n;
		std::cout << "\n" << plist << std::endl;
	}
	ComplexList::counter++;
	std::cout <<"\n" << counter << "개의 리스트가 만들어졌습니다." << std::endl;
}

inline ComplexList::ComplexList(ComplexList& c):ComplexList(c.Length())
{
	// 일이 반복되지 않음 다시 설정하기
	length = c.Length();

	for (int i = 0; i < length; i++)
	{

		Set(i, c.Get(i).GetReal(), c.Get(i).GetImage());

	}
}



inline ComplexList::ComplexList():ComplexList(10)
{
}



inline ComplexList::~ComplexList()
{
	delete []plist;
	ComplexList::counter--;
	std::cout <<"1개의 리스트가 소멸됐습니다." << std::endl;
}


#endif // !_ComplexList_H
