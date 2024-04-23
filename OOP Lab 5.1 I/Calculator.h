#pragma once
#include <iostream>
#include "Fraction.h"
using namespace std;

class Calculator : public Fraction {

public:
	Calculator();
	Calculator(const Fraction& frac);
	Calculator(const Calculator& other);
	~Calculator() {};

	Calculator& operator ++();
	Calculator& operator --();
	Calculator operator ++(int);
	Calculator operator --(int);

	Calculator operator=(const Calculator& int1);

	friend bool operator ==(const Calculator& int1, const Calculator& int2);
	friend bool operator >(const Calculator& int1, const Calculator& int2);
	friend bool operator <(const Calculator& int1, const Calculator& int2);
	friend bool operator !=(const Calculator& int1, const Calculator& int2);
	friend bool operator >=(const Calculator& int1, const Calculator& int2);
	friend bool operator <=(const Calculator& int1, const Calculator& int2);
	friend Calculator operator+ (const Calculator& int1, const Calculator& int2);
	friend Calculator operator- (const Calculator& int1, const Calculator& int2);
	friend Calculator operator* (const Calculator& int1, const Calculator& int2);

	friend ostream& operator << (ostream&, const Calculator&);
	friend istream& operator >> (istream&, Calculator&);
	operator string() const;
};