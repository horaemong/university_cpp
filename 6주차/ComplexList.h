//
//
//#ifndef _ComplexList_H
//#define _ComplexList_H
//
//#include "Complex.h"
//#include <iostream>
//
//
//class ComplexList 
//{
//private:
//	int length;
//	Complex* plist;
//	void init(int);
//public:
//	ComplexList(int);
//	ComplexList();
//	~ComplexList();
//	void Set(int, double, double);
//	Complex& Get(int);
//	int Length(void);
//};
//
//inline ComplexList::ComplexList(int n)
//{
//	init(n);
//}
//
//inline ComplexList::ComplexList()
//{
//	init(10);
//}
//
//inline void ComplexList::init(int n)
//{
//	if (n < 0)
//	{
//		length = 10;
//		plist = new Complex[10];
//		std::cout << "잘못된 값. 기본값으로 초기화\n";
//
//	}
//	else
//	{
//		plist = new Complex[n];
//		length = n;
//	}
//	
//}
//
//inline ComplexList::~ComplexList()
//{
//	delete []plist;
//}
//
//
//#endif // !_ComplexList_H
