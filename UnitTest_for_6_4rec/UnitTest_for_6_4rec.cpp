#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 6_4rec/Lab 6_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor64rec
{
	TEST_CLASS(UnitTestfor64rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = 0;
			double arr[7] = { -7.8, 9.1, 4.2, 0.7, 9.4, -9.9, 1.2 };
			double imin = arr[0];
			t = find_min(arr, 7, 0, imin);
			Assert::AreEqual(t, -9.9);
		}
	};
}
