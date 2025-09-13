#include "ComplexList.h"
#include <iostream>

int ComplexList::counter = 0;


void ComplexList::Add(double r, double i)
{
	Complex c(r, i);
	v.push_back(c);

}

void ComplexList::pAdd(double r, double i)
{
	Complex* c = new Complex(r, i);
	p_v.push_back(c);
}

Complex& ComplexList::Get(int n)
{
	return v[n];
}

Complex* ComplexList::pGet(int n)
{
	return &v[n];
}

Complex ComplexList::p_vGet(int i)
{

	return *p_v[i];
}

int ComplexList::Length(void)
{
	return v.size();
}

int ComplexList::pLength(void)
{
	return p_v.size();
}

void ComplexList::setCounter(int n)
{
	counter = n;
}