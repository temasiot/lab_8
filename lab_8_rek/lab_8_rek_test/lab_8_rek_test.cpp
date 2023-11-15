#include "pch.h"
#include "iostream"
#include <string.h>
#include "CppUnitTest.h"
#include "../lab_8_rek/lab_8_rek.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace task8ittest
{
	TEST_CLASS(task8ittest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[25] = { 'q','w','h','i','l','e','w','h','i','l','e','w','h','i','w','h','i','l','e','w','h','i','l','e',0 };
			Assert::AreEqual(Count(str, 1), 4);
		}
	};
}
