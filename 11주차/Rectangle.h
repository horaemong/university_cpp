#ifndef _Rectangle_H_
#define _Rectangle_H_
#include "Polygon.h"

class Rectangle
	:public Polygon
{
public:

	Rectangle(double, double);

	virtual double GetArea();
	bool isSquare(); // 정사각형 여부 확인
};

inline Rectangle::Rectangle(double w, double h)
	:Polygon(w,h,"Rectangle")
{
}




#endif // !_Rectangle_H_

