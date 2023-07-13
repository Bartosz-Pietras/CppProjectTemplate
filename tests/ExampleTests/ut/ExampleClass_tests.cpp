#include <gtest/gtest.h>

#include "Example/ExampleClass.hpp"

TEST(ExampleClassTests, stringParamGivenInConstructorShouldReturnTheSameString) {
    ExampleClass sut{"param1", 1};
    EXPECT_EQ(sut.getStringParam(), "param1");
}

TEST(ExampleClassTests, intParamGivenInConstructorShouldReturnTheSameInt) {
    ExampleClass sut{"param1", 1};
    EXPECT_EQ(sut.getIntParam(), 1);
}