// week4.cpp : Defines the entry point for the application.
//

#include <iostream>

using namespace std;

class Fraction {
	int numerator, denominator;

public: 
	Fraction(int n, int d) {
		setNumerator(n);
		setDenominator(d);
	}

	void setNumerator(int n){ numerator = n;	}
	int getNumerator(void) {  return numerator;  }

	void setDenominator(int d) { denominator = d; }
	int getDenominator(void) { return denominator; }

	float asFloat(void) {
		return (float)getNumerator() / getDenominator();
	}
};

void printFraction(Fraction f)
{
	cout << "Fraction at address:" << &f
		<< " Numerator:" << f.getNumerator()
		<< " Denominator:" << f.getDenominator() << endl;
}

int main()
{
	Fraction f(5, 1);
	printFraction(f);

	return 0;
}
