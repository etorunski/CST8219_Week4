// week4.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "Fraction.h"



using namespace std;

void foo(int a, int b = 30, bool c = true, int d = 40)
{

}


//global scope
void printFraction(Fraction &f)  //call by reference (pointer)
{
	cout << "Fraction at address:" << &f
		<< " Numerator:" << f.getNumerator()
		<< " Denominator:" << f.getDenominator() << endl;

	
}

int main()
{
	
	Fraction f( 5 ); // d =1
	Fraction f1 = Fraction(45); // n = 45 /  d = 1


	Fraction refObject(f); //copy by reference
	Fraction pointObject(&f); //copy by pointer

	printFraction(f);
	
	cout << "Fraction count = " << Fraction::count <<endl;
	return 0;
}





