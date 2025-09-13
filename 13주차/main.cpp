#include <iostream>
#include "ComplexList.h"
#include "Complex.h"

using std::cout;
using std::endl;

int main(void)
{
	// 1번 테스트
	ComplexList c1;
	c1.Add(1, 2);
	c1.Add(2, 3);
	c1.Add(3, 4);
	
	cout << "1번 테스트" << endl;
	for (int i = 0; i < c1.Length(); i++)
	{
		cout << i << "번 요소 : ";
		c1.Get(i).ShowComplex();
	}
	cout << "길이" << c1.Length() << std::endl;

	// 2번 테스트
	ComplexList c2;
	cout << "2번 테스트" << endl;
	c2.pAdd(1, 2);
	c2.pAdd(2, 3);
	c2.pAdd(3, 4);



	for (int i = 0; i < c2.pLength(); i++)
	{
		cout << i << "번 요소 : ";
		c2.p_vGet(i).ShowComplex();

	}
	cout << "길이" << c2.pLength() << std::endl;

	return 0;
}