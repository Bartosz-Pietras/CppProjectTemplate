#include <gtest/gtest.h>

#include "AnotherExample/AnotherExampleClass.hpp"

TEST(AnotherExampleClassTests, addShouldReturnZeroAfterDefaultConstructorCall) {
  AnotherExampleClass sut{};
  EXPECT_EQ(0, sut.add());
}

TEST(AnotherExampleClassTests, addShouldReturnFive) {
  AnotherExampleClass sut{1, 4};
  EXPECT_EQ(5, sut.add());
}