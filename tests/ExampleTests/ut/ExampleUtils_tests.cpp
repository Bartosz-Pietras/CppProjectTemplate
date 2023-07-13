#include <gtest/gtest.h>

#include "Example/ExampleUtils.hpp"

TEST(ExampleUtilsTests, describeExampleShouldReturnAStringWithParamsGivenInConstructor) {
  ExampleClass sut{"param1", 1};
  EXPECT_EQ("param1 1", describeExample(sut));
}