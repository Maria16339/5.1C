#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/5.1C/5.1C/Point.h"
#include "C://Users/User/source/repos/5.1C/5.1C/Point.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point a(5, 1);
			double b = a.GetX();
			Assert::AreEqual(b, 5.0);
		}
	};
}
