#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	#include "../Project1/functions.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		// simple use case (known values to prove basic functionality)
		TEST_METHOD(REQ001_1)
		{
			int expected = 4;
			int actual = add(2, 2);
			Assert::AreEqual(expected, actual);
		}

		// this next one will fail - for illustrative purposes only
		//TEST_METHOD(REQ001_2)
		//{
		//	int expected = 5;
		//	int actual = add(2, 2);
		//	Assert::AreEqual(expected, actual);
		//}

		// happy path test of integer subtraction
		TEST_METHOD(REQ002_1) {
			int expected = 2;
			int actual = subtract(4, 2);
			Assert::AreEqual(expected, actual);
		}

		// happy path test of integer division
		TEST_METHOD(REQ004_1) {
			int expected = 2;
			int actual = divide(4, 2);
			Assert::AreEqual(expected, actual);
		}

		// testing integer return test of integer division
		TEST_METHOD(REQ004_2) {
			float expected = 1.5;
			float actual = divide(3, 2);
			Assert::AreEqual(expected, actual);
		}

		// testing divide by zero integer division
		TEST_METHOD(REQ004_3) {
			float expected = 4;
			float actual = divide(3, 0);
			Assert::AreEqual(expected, actual);
		}
	};
}
