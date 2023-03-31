#include "pch.h"
#include "CppUnitTest.h"
#include "../Elevator Simulator.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMoveUp)
		{
			Elevator elevator(1);
			elevator.move(1, 3);
			Assert::AreEqual(elevator.get_current(), 3);
		}

		TEST_METHOD(TestMoveDown)
		{
			Elevator elevator(1);
			elevator.move(1, 3);
			elevator.move(3, 2);
			Assert::AreEqual(elevator.get_current(), 2);
		}

		TEST_METHOD(TestMoveZero)
		{
			Elevator elevator(1);
			elevator.move(1, 1);
			Assert::AreEqual(elevator.get_current(), 1);
		}
	};
}
