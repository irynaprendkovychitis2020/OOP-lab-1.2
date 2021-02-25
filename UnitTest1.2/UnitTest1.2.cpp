#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.2/Students.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Students a;
			a.GetAverageBall();
			int test = a.GetAverageBall();
			Assert::AreEqual(test, -107374176);

		}
	};
}
