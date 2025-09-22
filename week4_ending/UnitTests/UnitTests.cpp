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
		TEST_METHOD(REQ001)
		{
			int expected = 4;
			int actual = add(2, 2);
			Assert::AreEqual(expected, actual);
		}

		// this next one will fail - for illustrative purposes only
		TEST_METHOD(REQ002)
		{
			int expected = 5;
			int actual = add(2, 2);
			Assert::AreEqual(expected, actual);
		}
	};
}
