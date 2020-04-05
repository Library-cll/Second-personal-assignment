#include "stdafx.h"
#include "CppUnitTest.h"
#include<vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> arr{ -2,1,-3,4,-1,2,1,-5,4 };

			int sum = arr[0];
			int now = arr[0];

			for (int i = 1; i < arr.size(); i++)
			{
				if (now < 0)
					now = arr[i];
				else
					now = now + arr[i];
				if (now > sum)
					sum = now;
			}
			sum = sum < 0 ? 0 : sum;
			Assert::AreEqual(sum, 6);
		}

		TEST_METHOD(TestMethod2)
		{
			std::vector<int> arr{ -2,-4,-7,-1 };

			int sum = arr[0];
			int now = arr[0];

			for (int i = 1; i < arr.size(); i++)
			{
				if (now < 0)
					now = arr[i];
				else
					now = now + arr[i];
				if (now > sum)
					sum = now;
			}
			sum = sum < 0 ? 0 : sum;
			Assert::AreEqual(sum, 0);
		}
	};
}