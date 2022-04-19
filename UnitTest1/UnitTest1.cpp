#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 3.3A/Point.h"
#include "../lab 3.3A/Point.cpp"
#include "../lab 3.3A/Poin.h"
#include "../lab 3.3A/Poin.cpp"
#include "../lab 3.3A/P.h"
#include "../lab 3.3A/P.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			P x(2, 2.);
			x.Angle();
			Assert::AreEqual(45., x.Angle());
		}
	};
}
