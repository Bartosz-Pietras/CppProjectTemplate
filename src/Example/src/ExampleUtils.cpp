#include "Example/ExampleUtils.hpp"
#include <string>

std::string describeExample(const ExampleClass &classToPrint) {
    return classToPrint.getStringParam() + " " + std::to_string(classToPrint.getIntParam());
}