#include "Example/ExampleClass.hpp"
#include <iostream>


int main() {
    ExampleClass example = ExampleClass();
  
    example.setStringParam("example");

    std::cout << example.getStringParam() << std::endl;

    ExampleClass example2{"Param1", 23};

    std::cout << example2.getStringParam() << " " << example2.getIntParam() << std::endl;
    return 0;
}