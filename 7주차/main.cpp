#include <iostream>
#include "Complex.h"
#include "ComplexList.h"
#include <cstdlib>
using std::cin;



int main(void)
{	
	ComplexList::setCounter(0);

	ComplexList cList1;
	ComplexList cList2(5);


	std::cout << "\ncl1 test" << std::endl;
	for (int i = 0; i < cList1.Length(); i++)
	{
		double real = rand() % 10;
		double image = rand() % 10;
		cList1.Set(i, real, image);
		Complex c1 = cList1.Get(i);
		c1.ShowComplex();
	}
	std::cout << "\ncl2 test" << std::endl;
	for (int i = 0; i < cList2.Length(); i++)
	{
		double real = rand() % 10;
		double image = rand() % 10;
		cList2.Set(i, real, image);
		Complex c2 = cList2.Get(i);
		c2.ShowComplex();
	}

	ComplexList cList3(cList2);
	std::cout << "\ncl3 test" << std::endl;
	for (int i = 0; i < cList3.Length(); i++)
	{

		Complex c3 = cList3.Get(i);
		c3.ShowComplex();
	}
	return 0;
}


