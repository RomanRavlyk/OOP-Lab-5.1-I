#include "Calculator.h"
#include <iostream>
#include <sstream>
using namespace std;

Calculator::Calculator() {
	setNumerator(0);
	setDenominator(1);
}

Calculator::Calculator(const Fraction& frac) {
	setNumerator(frac.getNumerator());
	setDenominator(frac.getDenominator());
}

Calculator::Calculator(const Calculator& other) {
	this->setDenominator(other.getDenominator());
	this->setNumerator(other.getNumerator());
}

Calculator operator+(const Calculator& int1, const Calculator& int2) {
	Calculator result;
	long res;
	unsigned short res1;
	res = int1.getNumerator() + int2.getNumerator();
	res1 = int1.getDenominator() + int2.getDenominator();
	result.setNumerator(res);
	result.setDenominator(res1);
	return result;
}

Calculator operator-(const Calculator& int1, const Calculator& int2) {
	Calculator result;
	long res;
	unsigned short res1;
	res = int1.getNumerator() - int2.getNumerator();
	res1 = int1.getDenominator() - int2.getDenominator();
	result.setNumerator(res);
	result.setDenominator(res1);
	return result;
}

Calculator operator*(const Calculator& int1, const Calculator& int2) {
	Calculator result;
	long res;
	unsigned short res1;
	res = int1.getNumerator() * int2.getNumerator();
	res1 = int1.getDenominator() * int2.getDenominator();
	result.setNumerator(res);
	result.setDenominator(res1);
	return result;
}

bool operator >=(const Calculator& int1, const Calculator& int2) {
	return (int1.getNumerator() >= int2.getNumerator()) && (int1.getDenominator() >= int2.getDenominator());
}
bool operator <=(const Calculator& int1, const Calculator& int2) {
	return (int1.getNumerator() <= int2.getNumerator()) && (int1.getDenominator() <= int2.getDenominator());
}
bool operator !=(const Calculator& int1, const Calculator& int2) {
	return !(int1 == int2);
}

bool operator==(const Calculator& int1, const Calculator& int2) {
	return (int1.getNumerator() == int2.getNumerator()) && (int1.getDenominator() == int2.getDenominator());
}

bool operator<(const Calculator& int1, const Calculator& int2) {
	return (int1.getNumerator() < int2.getNumerator()) && (int1.getDenominator() < int2.getDenominator());
}

bool operator>(const Calculator& int1, const Calculator& int2) {
	return (int1.getNumerator() > int2.getNumerator()) && (int1.getDenominator() > int2.getDenominator());
}

Calculator Calculator::operator=(const Calculator& other) {
	setNumerator(other.getNumerator());
	setDenominator(other.getDenominator());
	return *this;
};



ostream& operator << (ostream& out, const Calculator& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Calculator& r)
{
	long x;
	unsigned short y = 1;
	cout << "Enter Numerator: "; in >> x;
	if (x == 0) throw x;
	r.setNumerator(x); cout << endl;
	cout << "Enter Denomirator: ";
	in >> y;
	if (y == 0) throw y;
	r.setDenominator(y); cout << endl;
	cout << endl;
	return in;
}

Calculator::operator string() const {
	stringstream ss;
	cout << "Your Numerator: " << getNumerator() << endl;
	cout << "Your Denomirator: " << getDenominator() << endl;
	ss << endl;
	return ss.str();
}


Calculator& Calculator::operator ++()
{
	unsigned short x = getDenominator();
	x++;
	setDenominator(x);
	return *this;
}
Calculator& Calculator::operator --()
{
	unsigned short x = getDenominator();
	x--;
	setDenominator(x);
	return *this;
}
Calculator Calculator::operator ++(int)
{
	Calculator t(*this);
	unsigned short x = getDenominator();
	x++;
	t.setDenominator(x);
	return t;
}
Calculator Calculator::operator --(int)
{
	Calculator t(*this);
	unsigned short x = getDenominator();
	x--;
	t.setDenominator(x);
	return t;
}