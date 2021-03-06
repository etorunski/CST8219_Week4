
#include <iostream> // for std::cout
#include "Fraction.h" // for class Fraction{}

//now it knows class Fraction{}

Fraction::Fraction() : Fraction(0) {}


Fraction::Fraction(int n, int d) { //default 0/1
	setNumerator(n);
	setDenominator(d);
}

Fraction::Fraction(Fraction& other) :
	Fraction(other.getNumerator(), other.getDenominator())
{
	std::cout << "Copying from:" << &other << std::endl;
}

Fraction::Fraction(Fraction* pOther) : Fraction(*pOther)//call other copy constructor
{
	std::cout << "Copying from:" << pOther << std::endl;
}


//setNumerator and getNumerator are Fraction:: functions:
void Fraction::setNumerator(int n) { numerator = n; }
int Fraction::getNumerator(void) { return numerator; }

void Fraction::setDenominator(int d) { denominator = d; }
int Fraction::getDenominator(void) { return denominator; }

float Fraction::asFloat(void) {
	return (float)getNumerator() / getDenominator();
}

