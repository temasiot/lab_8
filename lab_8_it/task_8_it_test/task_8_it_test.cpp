#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "iostream"
#include "CppUnitTest.h"
#include "../lab_8_it/lab_8_it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace task8ittest
{
	TEST_CLASS(task8ittest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[6] = {'w','h','i','l','e'};
			Assert::AreEqual(Count(str), 1);
		}
	};
}