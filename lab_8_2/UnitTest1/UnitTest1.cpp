#include "pch.h"
#include "iostream"
#include <string.h>
#include "CppUnitTest.h"
#include "../lab_8_2/lab_8_2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace task8ittest
{
	TEST_CLASS(task8ittest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[5] = { 'w',' ',' ','q'};
			Assert::AreEqual(Count(str), 2);
		}
	};
}
