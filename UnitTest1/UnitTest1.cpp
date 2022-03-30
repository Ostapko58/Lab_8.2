#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.2/Lab_8.2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "jsdjkasjhkdhjka1   2dsadasdasdasdas     asdasdasdas    asdasdasd1    2dasdasdas";
			string str2 = "jsdjkasjhkdhjka12dsadasdasdasdas asdasdasdas asdasdasd12dasdasdas";
			Assert::AreEqual(Del(str), str2);
		}
	};
}
