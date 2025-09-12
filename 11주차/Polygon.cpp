#include "Polygon.h"
#include <iostream>

void Polygon::ShowInfo()
{
	std::cout << "너비 : " << width << ", 높이 : " << height << ", 종류 : " << type << std::endl;
}

void Polygon::SetType(const char* t)
{
	if (type != NULL)
	{
		delete[] type;
	}
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}

