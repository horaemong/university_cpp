#ifndef _Square_H_
#define _Square_H_
#include "Rectangle.h"

class Square
	:public Rectangle
{
public:
	Square(double);
};

inline Square::Square(double w)
	:Rectangle(w,w)
{
	SetType("Square");
}
#endif // !_Square_H_

