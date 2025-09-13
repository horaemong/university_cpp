

#ifndef _ComplexList_H
#define _ComplexList_H

#include "Complex.h"
#include <iostream>
#include <vector>

using std::vector;

class ComplexList 
{
private:
	static int counter;
	vector<Complex> v;
	vector<Complex*> p_v;
	 
public:

	static void setCounter(int);
	ComplexList(ComplexList&);
	ComplexList();
	~ComplexList();
	void Add(double, double);
	void pAdd(double, double);
	Complex& Get(int);
	Complex* pGet(int);
	Complex p_vGet(int);
	int Length(void);
	int pLength(void);
};



inline ComplexList::ComplexList(ComplexList& c)
{
	std::cout << "ComplexList 복사 생성" << std::endl;
	ComplexList::counter++;

	for (int i = 0; i < c.Length(); i++)
	{
		Add(c.Get(i).GetReal(), c.Get(i).GetImage());
	}
}



inline ComplexList::ComplexList()
{
	std::cout << "ComplexList 생성" << std::endl;
	ComplexList::counter++;
}



inline ComplexList::~ComplexList()
{
	
	vector<Complex*>::iterator it = p_v.begin();

	if (p_v.size() >0)
	{
		for (it = p_v.begin(); it != p_v.end(); it++)
		{
			std::cout << *it << std::endl;
			delete* it;
		}
	}

	ComplexList::counter--;
	std::cout <<"1개의 리스트가 소멸됐습니다." << std::endl;
}


#endif // !_ComplexList_H
