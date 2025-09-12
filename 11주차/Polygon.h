#ifndef _Polygon_H_
#define _Polygon_H_

#include <cstring>

class Polygon
{
protected:
	double width;
	double height;
	char* type;
public:

	Polygon(double, double, const char*);
	~Polygon();

	void deleteType();
	void ShowInfo();
	void SetType(const char*);
	virtual double GetArea() = 0;
};


inline Polygon::Polygon(double w, double h, const char* t)
{
	width = w;
	height = h;
	SetType(t);
}

inline Polygon::~Polygon()
{
	delete[] type;
}

#endif // !_Polygon_H_
