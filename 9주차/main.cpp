#include <iostream>
#include "String.h"
using std::cout;
using std::endl;

int main(void)
{
	// 1단계
	String s1;
	String s2("hello world");

	// 2단계
	cout << "s1: "<<s1<<endl;
	cout << "s1.len = " << s1.length()<<endl;

	cout << "s2 : " << s2 << endl;

	// 3단계
	s1 = s2;
	cout << "s1 : " << s1 << endl;

	// 4단계
	String s3 = s2;
	cout << "s3 : " << s3 << endl;

	// 5단계
	String s4 = s1 + s2;
	cout << "s4 : " << s4 << endl;

	// 6단계
	if (s1 == s2)
	{
		cout << "둘은 같다" << endl;
	}
	else
	{
		cout << "둘은 다르다." << endl;
	}

	if (s1 == "bye")
	{
		cout << "둘은 같다" << endl;
	}
	else
	{
		cout << "둘은 다르다." << endl;
	}

	return 0;
}