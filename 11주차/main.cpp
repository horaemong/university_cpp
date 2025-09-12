#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"

int main(void)
{
	Polygon* pList[3];
	Rectangle* r;

	// ¹è¿­ »ðÀÔ
	pList[0] = new Rectangle(1, 1);
	pList[1] = new Square(2);
	pList[2] = new Triangle(2, 1);

	// pList test
	for (int i = 0; i < 3; i++)
	{
		pList[i]->ShowInfo();
		pList[i]->GetArea();

		// is Rectangle?
		r = dynamic_cast<Rectangle*>(pList[i]); 
		if (r != NULL)	
		{
			std::cout << "isRectangle" << ((Rectangle*)pList[i])->isSquare() << std::endl;
		}
	}
	

	return 0;
}