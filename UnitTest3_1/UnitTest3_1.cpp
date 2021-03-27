#include "pch.h"
#include "CppUnitTest.h"
#include "../oop3.1/Long.h"
#include "D:\Student\oop3.1\oop3.1\Long.cpp"
#include "../oop3.1/Pair.h"
#include "D:\Student\oop3.1\oop3.1\Pair.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a(1,1);
			bool t;
			t = a.Init(1000, 7);
			Assert::AreEqual(t, true);
		}
	};
}
