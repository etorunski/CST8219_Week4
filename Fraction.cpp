
#include "Fraction.h"
#include <iostream>

using namespace std;


int Fraction::count = 0;



Fraction::Fraction(int n , int d) {
	setNumerator(n);
	setDenominator(d);
}

Fraction::Fraction(Fraction& copy) : Fraction(copy.getNumerator(), copy.getDenominator()) //pass by reference
{
	cout << &copy << endl;
}

Fraction::Fraction(Fraction* pCopy) : Fraction(*pCopy)
{
	cout << pCopy << endl;
}

void Fraction::setNumerator(int n) { numerator = n; }
int Fraction::getNumerator(void) { return numerator; }

void Fraction::setDenominator(int d ) { denominator = d; }
int Fraction::getDenominator(void) { return denominator; }

float Fraction::asFloat(void) {
	return (float)getNumerator() / getDenominator();
}



