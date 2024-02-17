#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.1/Line.h"
#include "../lab1.1/Line.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
    TEST_CLASS(UnitTest11)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Create an instance of the Line class
            Line line;

            // Call the Init method and check if it returns true
            Assert::IsTrue(line.Init(1.0, 2.0));

            // Check if the function method returns the expected value
            Assert::AreEqual(line.function(1), 1.0 * 1.0 + 2.0);
        }             
    };
}
