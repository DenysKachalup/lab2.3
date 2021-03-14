#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.3/Vector2D.h"
#include "../lab2.3/Vector2D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector2D a(3, 4);
			double b;
			b = a.Modul();
			Assert::AreEqual(b, 5.0);
		}
	};
}
