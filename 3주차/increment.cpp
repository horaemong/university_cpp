#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int increment_value(int n);
int *increment_address();
int &increment_reference();

int all = 10;

int main(void)
{
	int x;
	int *y = &all;

	// return by value
	cout << "return by value" << endl;
	x = increment_value(10);
	cout << x << endl;

	// return by address
	cout << "return by address" << endl;
	y = increment_address();
	cout << *y << endl;
	cout << all << endl;

	// return by reference
	cout << "return by reference" << endl;

	// 참조자로 받을때
	int &z = increment_reference();
	cout << "참조자로 받을때" << endl;
	cout << z << endl;
	z += 1;
	cout << z << endl;
	cout << all << endl;
	// int로 받을때
	int r = increment_reference();
	cout << "int로 받을때" << endl;
	cout << r << endl;
	r += 1;
	cout << r << endl;
	cout << all << endl;

	return 0;
}

int increment_value(int n)
{
	n++;
	return n;
}

int *increment_address()
{
	all++;
	return &all;
}

int &increment_reference()
{
	all++;
	return all;
}