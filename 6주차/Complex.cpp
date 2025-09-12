#include "Complex.h"
#include <iostream>



void Complex::SetComplex(double a, double b)
{
	real = a;
	image = b;
}

double Complex::GetReal(void)
{
	return real;
}

double Complex::GetImage(void)
{
	return image;
}

void Complex::ShowComplex(void)
{
	if (image == 0)
	{
		std::cout << real << std::endl;
	}
	else if (image > 0) 
	{
		std::cout << real<<"+"<<image<<"i" << std::endl;
	}
	else
	{
		std::cout << real << image << "i" << std::endl;
	}
	
}


void InputComplex(Complex* c)
{
	double a;
	double b;

	std::cout << "실수부 다음 허수부를 입력하세요." << std::endl;
	std::cin >> a;
	std::cin >> b;

	c->SetComplex(a, b);
	std::cout << "변경 완료" << std::endl;
	c->ShowComplex();
}
void InputComplex(Complex& c)
{
	double a;
	double b;

	std::cout << "실수부 다음 허수부를 입력하세요." << std::endl;
	std::cin >> a;
	std::cin >> b;

	c.SetComplex(a, b);

	std::cout << "변경 완료" << std::endl;
	c.ShowComplex();
}

Complex& InpAndRetComplex(Complex& c)
{
	double a;
	double b;

	std::cout << "실수부 다음 허수부를 입력하세요." << std::endl;
	std::cin >> a;
	std::cin >> b;

	c.SetComplex(a, b);
	return c;
}

Complex  AddComplex(Complex& c1, Complex& c2)
{
	double real = c1.GetReal() + c2.GetReal();
	double image = c1.GetImage() + c2.GetImage();

	Complex resultC(real, image);
	std::cout << "계산 결과는 ";
	resultC.ShowComplex();
	std::cout << "이다.";

	Complex c(real, image);

	return c;
}

Complex  AddComplex(Complex* c1, Complex* c2)
{
	double real = c1->GetReal() + c2->GetReal();
	double image = c1->GetImage() + c2->GetImage();

	Complex resultC(real, image);
	std::cout << "계산 결과는 ";
	resultC.ShowComplex();
	std::cout << "이다.";

	Complex c(real, image);

	return c;
}
