#include "Fraction.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

long Fraction::getNumerator() const {
	return numerator;
}

unsigned short Fraction::getDenominator() const {
	return denominator;
}


Fraction operator+(const Fraction& int1, const Fraction& int2) {
	Fraction result;
	result.numerator = int1.numerator + int2.numerator;
	result.denominator = int1.denominator + int2.denominator;
	return result;
}

Fraction operator-(const Fraction& int1, const Fraction& int2) {
	Fraction result;
	result.numerator = int1.numerator - int2.numerator;
	result.denominator = int1.denominator - int2.denominator;
	return result;
}

Fraction operator*(const Fraction& int1, const Fraction& int2) {
	Fraction result;
	result.numerator = int1.numerator * int2.numerator;
	result.denominator = int1.denominator * int2.denominator;
	return result;
}

bool operator >=(const Fraction& int1, const Fraction& int2) {
	return (int1.numerator >= int2.numerator && int1.denominator >= int2.denominator);
}
bool operator <=(const Fraction& int1, const Fraction& int2) {
	return (int1.numerator <= int2.numerator && int1.denominator <= int2.denominator);
}
bool operator !=(const Fraction& int1, const Fraction& int2) {
	return (int1.numerator != int2.numerator && int1.denominator != int2.denominator);
}

bool operator==(const Fraction& int1, const Fraction& int2) {
	return (int1.numerator == int2.numerator && int1.denominator == int2.denominator);
}

bool operator<(const Fraction& int1, const Fraction& int2) {
	return (int1.numerator < int2.numerator && int1.denominator < int2.denominator);
}

bool operator>(const Fraction& int1, const Fraction& int2) {
	return (int1.numerator > int2.numerator && int1.denominator > int2.denominator);
}

Fraction Fraction::operator=(const Fraction& other) {
	numerator = other.numerator;
	denominator = other.denominator;
	return *this;
};



ostream& operator << (ostream& out, const Fraction& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Fraction& r)
{
	cout << "Enter Numerator: "; in >> r.numerator; cout << endl;
	cout << "Enter Denomirator: "; in >> r.denominator; cout << endl;
	cout << endl;
	return in;
}

Fraction::operator string() const {
	stringstream ss;
	cout << "Your Numerator: " << numerator << endl;
	cout << "Your Denomirator: " << denominator << endl;
	ss << endl;
	return ss.str();
}


Fraction& Fraction::operator ++()
{
	numerator++;
	return *this;
}
Fraction& Fraction::operator --()
{
	denominator--;
	return *this;
}
Fraction Fraction::operator ++(int)
{
	Fraction t(*this);
	denominator++;
	return t;
}
Fraction Fraction::operator --(int)
{
	Fraction t(*this);
	numerator--;
	return t;
}