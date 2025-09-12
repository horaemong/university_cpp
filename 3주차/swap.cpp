#include <iostream>

using std::cout;
using std::endl;

void swap_value(int a, int b);
void swap_address(int *a, int *b);
void swap_reference(int &a, int &b);

int main(void)
{
	int a = 10;
	int b = 5;

	// call by value
	cout << "call by value" << endl;
	swap_value(a, b);
	cout << "a와 b의 값이 바뀌지 않음\n";
	cout << a << ", " << b << endl;

	// call by address
	cout << "call by address" << endl;
	swap_address(&a, &b);
	cout << a << ", " << b << endl;

	// call by reference
	cout << "call by reference" << endl;
	swap_reference(a, b);
	cout << a << ", " << b << endl;

	return 0;
}

void swap_value(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "함수에서 간접 참조 불가\n";
	cout << a << ", " << b << endl;
}

void swap_address(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << "함수 작동\n";
}

void swap_reference(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "함수 작동\n";
}