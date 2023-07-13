#pragma once

class AnotherExampleClass {
private:
  int a;
  int b;

public:
  AnotherExampleClass() : a(0), b(0){};
  AnotherExampleClass(const int a, const int b) : a(a), b(b){};
  int add();
};