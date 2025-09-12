#include "Triangle.h"
#include <iostream>

double Triangle::GetArea()
{
	std::cout << "³ÐÀÌ´Â " << (width * height) / 2 << "ÀÌ´Ù." << std::endl;
	return (width * height)/2;
}