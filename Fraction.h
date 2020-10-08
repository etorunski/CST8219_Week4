

#pragma once

class Fraction {
	int numerator, denominator;

protected:
	static int count;

public:
	

	Fraction(int = 0, int = 1);

	Fraction(Fraction&  );

	Fraction(Fraction* );

	void setNumerator(int );
	int getNumerator(void);

	void setDenominator(int  );
	int getDenominator(void);
	float asFloat(void);
};


int Fraction::count = 0;
