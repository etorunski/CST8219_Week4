
#include <iostream> // for std::cout
#include "Fraction.h" // for class Fraction{}


using namespace std;
//can't change what f points to
std::ostream& operator<<(std::ostream& out, const  Fraction& f) {
	//this is friend, private and protected of Fraction don't apply
	out << "Numerator="   << f.numerator
		<< " Denominator="<< f.denominator;
	return out;
}

std::istream& operator>>(std::istream& in, Fraction& f)
{	//this is friend, private and protected of Fraction don't apply
	cout << "input the numerator:";
	cin >> f.numerator;

	cout << "input the denominator:";
	cin >> f.denominator;

	cout << "Your fraction is now:" << f << endl;

	return in;
}

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

Fraction::~Fraction() {  }

Fraction::Fraction(Fraction* pOther) : Fraction(*pOther)//call other copy constructor
{
	std::cout << "Copying from:" << pOther << std::endl;
}


//setNumerator and getNumerator are Fraction:: functions:
void Fraction::setNumerator(int n) { numerator = n; }
int Fraction::getNumerator(void) const { return numerator; }

void Fraction::setDenominator(int d) { denominator = d; }

int Fraction::getDenominator(void) const
{ return denominator; }

float Fraction::asFloat(void) {
	return (float)getNumerator() / getDenominator();
}

Fraction Fraction::operator+=(const Fraction& other)
{
	setNumerator(numerator * other.denominator + other.numerator * denominator);
	setDenominator(denominator * other.denominator);
	return Fraction(this);//returning copy
}

Fraction Fraction::operator++(int a) //int makes it a++
{
	Fraction copy(this);
	//increment by 1
	numerator += denominator;
	return copy;
}