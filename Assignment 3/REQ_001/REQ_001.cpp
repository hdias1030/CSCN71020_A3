#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* RockPaperScissors(char[], char[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(AddFunctionality)
		{
			char result[20] = "";
			strcpy_s(result, RockPaperScissors("Rock", "Scissors"));
			Assert::AreEqual(strcmp(result, "Player1"), 0);
		}
	};
}
