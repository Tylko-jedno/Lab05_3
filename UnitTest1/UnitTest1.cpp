#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab05_3/Lab05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double t;
            t = s(1);
            double expected = 1.994291; // Ожидаемое значение
            double epsilon = 0.000001; // Допустимая точность сравнения
            Assert::AreEqual(t, expected, epsilon); // Используем epsilon для сравнения с плавающей запятой
        }
    };
}
