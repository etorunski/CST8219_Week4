#include "Fraction.h"
#include <iostream>

using namespace std;



//no static
int Fraction::count = 0; //declare outside of { };



Fraction::Fraction(int n , int d ) //don't repeat default parameters in .cpp
{
	setNumerator(n);
	setDenominator(d);
}

Fraction::Fraction(Fraction& copy)
	: Fraction(copy.getNumerator(), copy.getDenominator())
{
	cout << "Address of &copy:" << &copy << endl;
}  

Fraction::Fraction(Fraction* copy) : Fraction(*copy) //dereference copy pointer
{
	cout << "Address of *copy:" << copy << endl;
}

void Fraction::setNumerator(int n) { numerator = n; }
int Fraction::getNumerator(void) { return numerator; }

void Fraction::setDenominator(int d) { denominator = d; }
int Fraction::getDenominator(void) { return denominator; }

float Fraction::asFloat(void) {
	return (float)getNumerator() / getDenominator();
}