#ifndef _Complex_H
#define _Complex_H

class Complex {
private:
	double real;
	double image;
	void init(double, double);

public:
	Complex(double, double);
	Complex();
	void SetComplex(double, double);
	double GetReal(void);
	double GetImage(void);
	void ShowComplex(void);
};

inline Complex::Complex(double a, double b)
{
	init(a, b);
}

inline Complex::Complex()
{
	init(0, 0);
}


inline void Complex::init(double a, double b)
{
	real = a;
	image = b;
}

void InputComplex(Complex* c);
void InputComplex(Complex& c);
Complex& InpAndRetComplex(Complex& c);

Complex  AddComplex(Complex* c1, Complex* c2);
Complex AddComplex(Complex& c1, Complex& c2);

#endif // !_Complex_H
