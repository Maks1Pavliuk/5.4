#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test4
{
	TEST_CLASS(test4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = P0(1);
			double expected = 139.381;
				Assert::AreEqual(expected, result, 0.001);
		}
	};
}
