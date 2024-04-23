#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 5.1 I/Calculator.h"
#include "..//OOP Lab 5.1 I/Calculator.cpp"
#include "..//OOP Lab 5.1 I/Fraction.h"
#include "..//OOP Lab 5.1 I/Fraction.cpp"
#include "..//OOP Lab 5.1 I/Object.h"
#include "..//OOP Lab 5.1 I/Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Fraction fraction(2, 3);
			long x = 2;
			Assert::AreEqual(x, fraction.getNumerator());
		}
	};
}
