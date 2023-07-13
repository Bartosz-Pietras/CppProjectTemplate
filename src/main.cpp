#include "Example/ExampleClass.hpp"
#include "AnotherExample/AnotherExampleClass.hpp"
#include <iostream>


int main() {
    ExampleClass example = ExampleClass();
  
    example.setStringParam("example");

    std::cout << example.getStringParam() << std::endl;

    ExampleClass example2{"Param1", 23};

    std::cout << example2.getStringParam() << " " << example2.getIntParam()
              << std::endl;


    AnotherExampleClass anotherExample = AnotherExampleClass();

    std::cout << anotherExample.add() << std::endl;

    AnotherExampleClass anotherExample2{4, 7};

    std::cout << anotherExample2.add() << std::endl;

    return 0;
}