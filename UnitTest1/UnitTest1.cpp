#include "pch.h"
#include "CppUnitTest.h"
#include "../pr11.1/pr11.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[6] = "t.txt";
			int i = findGroup(fname);
			Assert::AreEqual(0, i);
		}
	};
}
