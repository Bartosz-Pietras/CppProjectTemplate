add_executable(
    ExampleUTs
    ExampleClass_tests.cpp
    ExampleUtils_tests.cpp)

target_link_libraries(ExampleUTs PRIVATE GTest::gtest_main Example)

add_test(ExampleTests ExampleUTs)
