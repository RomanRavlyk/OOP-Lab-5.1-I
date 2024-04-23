#include "Calculator.h"
#include <iostream>

using namespace std;

int main() {

	Fraction fraction;
	Calculator calculator;

	try{
		
		cin >> calculator;
		cout << calculator;
	}
	catch (long) {
		cout << "Numerator cannot be 0!";
		exit(0);
	}
	catch (unsigned short) {
		cout << "Denominator cannot be 0!";
		exit(0);
	}

	Calculator calculator1;
	try {
		
		cin >> calculator1;
		cout << calculator1;
	}
	catch (long) {
		cout << "Numerator cannot be 0!";
		exit(0);
	}
	catch (unsigned short) {
		cout << "Denominator cannot be 0!";
		exit(0);
	}


	Calculator fraction2 = calculator + calculator1;

	cout << fraction2;

	fraction2 = calculator - calculator1;
	cout << fraction2;

	fraction2 = calculator * calculator1;
	cout << fraction2;


	cout << "> ";
	if (calculator > calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (calculator < calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (calculator == calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (calculator != calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (calculator >= calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "!= ";
	if (calculator <= calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;

	cout << "ObjectCount: " << Object::Count() << endl;
	cout << "LiquidCount: " << Fraction::Count() << endl;
	cout << "SolutionCount: " << Calculator::Count() << endl;


	return 0;
}