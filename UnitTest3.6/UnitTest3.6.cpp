#include "pch.h"
#include "CppUnitTest.h"
#include "../3.6/B1.cpp"
#include "../3.6/B2.cpp"
#include "../3.6/D1.cpp"
#include "../3.6/D2.cpp"
#include "../3.6/D3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest36
{
	TEST_CLASS(UnitTest36)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			D2 Test(1000, 2000, 3000);
			Assert::AreEqual(sizeof(D2), size_t(12));
		}
	};
}
