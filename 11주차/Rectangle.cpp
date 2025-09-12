#include "Rectangle.h"
#include <iostream>

double Rectangle::GetArea()
{
	std::cout << "³ÐÀÌ´Â " << width * height << "ÀÌ´Ù." << std::endl;
	return width*height;
}

bool Rectangle::isSquare()
{
	if (width == height)
	{
		return true;
	}
	else
	{
		return false;
	}
}
