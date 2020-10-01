

#pragma once 
#ifndef _Fraction_h_
#define _Fraction_h_
//only declare Fraction once

class Fraction {
	int numerator, denominator;

public:
	 static int count ;

public:

	Fraction(int = 0, int = 1);

	Fraction(Fraction& );

	Fraction(Fraction* g);

	void setNumerator(int );
	int getNumerator(void);

	void setDenominator(int );
	int getDenominator(void);

	float asFloat(void);
};


#endif

