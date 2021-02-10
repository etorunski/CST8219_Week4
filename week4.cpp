// week4.cpp : Defines the entry point for the application.
//

#include <iostream>

#define TESTING 0
#include "week4.h" //include fraction.h, declares class Fraction
#include "Fraction.h" //stops here and goes to Fraction.h

//return from line 39 in Fraction.h
using namespace std;
void printFraction(Fraction &f) //now it's *, but looks like object
{
	cout << "Fraction at address:" << &f
		<< " Numerator:" << f.getNumerator()
		<< " Denominator:" << f.getDenominator() << endl;
}

void foo(int a, int b , int c = 20, int d = 20) {}


int main()
{

	Fraction f1(1, 3);
	Fraction f2(1, 4);

	cout << f1++; //operator++(int)  increment by 1, or 4/3, print out 1/3
	cout << ++f1;//operator++(void)
	
	f1 % f2; //operator%(Fraction &other)
	f1 % 4;// operator%(int other)

	cout << f1[0] << endl << f1[1] << endl << f1[2]; 
	operator<<(cout, f1); //same cout << f1;
	return 0;
}

