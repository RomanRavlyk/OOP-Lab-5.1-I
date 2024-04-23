#pragma once
#include <iostream>
#include "Object.h"
using namespace std;

class Fraction : public Object {
private:
	long numerator = 0;
	unsigned short denominator = 1;

public:
	Fraction() : numerator(0), denominator(1) {};
	Fraction(int num, int denom) : numerator(num), denominator(denom) {};
	Fraction(const Fraction& other) : numerator(other.numerator), denominator(other.denominator) {};
	~Fraction() {};

	long getNumerator() const;
	unsigned short getDenominator() const;
	void setNumerator(long value) { numerator = value; };
	void setDenominator(unsigned short value) { denominator = value; };

	Fraction& operator ++();
	Fraction& operator --();
	Fraction operator ++(int);
	Fraction operator --(int);


	Fraction operator=(const Fraction& int1);

	friend bool operator ==(const Fraction& int1, const Fraction& int2);
	friend bool operator >(const Fraction& int1, const Fraction& int2);
	friend bool operator <(const Fraction& int1, const Fraction& int2);
	friend bool operator !=(const Fraction& int1, const Fraction& int2);
	friend bool operator >=(const Fraction& int1, const Fraction& int2);
	friend bool operator <=(const Fraction& int1, const Fraction& int2);
	friend Fraction operator+ (const Fraction& int1, const Fraction& int2);
	friend Fraction operator- (const Fraction& int1, const Fraction& int2);
	friend Fraction operator* (const Fraction& int1, const Fraction& int2);

	friend ostream& operator << (ostream&, const Fraction&);
	friend istream& operator >> (istream&, Fraction&);
	operator string() const;

};
