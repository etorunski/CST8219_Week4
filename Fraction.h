
//header guard, only compile once

#pragma once
#include <iostream>



class AnotherClass
{ //private, protected of Fraction 
public:
	AnotherClass() {
		
	}
};

class Fraction {
	friend std::istream& operator>>(std::istream&, Fraction&);
	friend std::ostream& operator<<(std::ostream& , const Fraction&);

	int numerator, denominator;
	const static int num = 0; //initialize here needs const
public:

	Fraction();//chaining to other

	//can have  1, or 2 parameters
	Fraction(int n, int d = 1);
	Fraction(Fraction&);
	Fraction(Fraction* );
	~Fraction();

	//a + b //doesn't change a, b
	Fraction operator+=(const Fraction& other);


	Fraction operator++(int a) //int makes it a++
		;
	void operator%(Fraction& other) {}
	void  operator%(int other) {}

	void operator<<(int numBits)
	{
		numerator += denominator * pow(2, numBits);
	}

	bool operator!( void )
	{
		return numerator == 0;
	}

	Fraction operator++(void) //++a //return incremented value
	{
		numerator += denominator;
		return Fraction(this); //return updated version
	}

	int operator[ ] (int index) //implementing f[index]
	{
		switch (index)
		{
		case 0: return numerator; break;
		case 1: return denominator; break;

		default:
			return 0;
		}
	}

	void setNumerator(int);
	int getNumerator(void) const; //can't change variables

	void setDenominator(int);
	int getDenominator(void) const; //can't change variables

	float asFloat(void);


};

