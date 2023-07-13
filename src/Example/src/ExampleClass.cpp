#include "Example/ExampleClass.hpp"

void ExampleClass::setStringParam(const std::string newStringParam) {
  this->stringParam = newStringParam;
}

void ExampleClass::setIntParam(const int newIntParam) {
  this->intParam = newIntParam;
}

std::string ExampleClass::getStringParam() const { return this->stringParam; }

int ExampleClass::getIntParam() const { return this->intParam; }