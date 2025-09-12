#ifndef _Triangle_H_
#define _Triangle_H_

#include "Polygon.h"

class Triangle
	:public Polygon
{
public:
	Triangle(double, double);


	virtual double GetArea();
};

inline Triangle::Triangle(double w, double h)
	:Polygon(w,h,"Triangle")
{}



#endif // !_Triangle_H_

