// week4.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "Fraction.h"

using namespace std;


void printFraction(Fraction &f) //copy by reference (pointer)
{
	cout << "Fraction at address:" << &f
		<< " Numerator:" << f.getNumerator()
		<< " Denominator:" << f.getDenominator() << endl;
}


void funct(int a , bool b, int c = 5, int d = 10)
{
}

int main()
{

	Fraction f1 = Fraction( );


	Fraction f(5, 1);



	Fraction refObject(f); //copy by reference
	Fraction pointObject(&f); //copy by pointer

	printFraction(f);

	return 0; 
	//call destructor of f
}




