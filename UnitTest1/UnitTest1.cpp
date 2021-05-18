#include "pch.h"
#include "CppUnitTest.h"
#include "../IntPower.cpp"
#include "../IntPower.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			IntPower A(4, 4);
			Assert::AreEqual(A.power(), 256.);
		}
	};
}