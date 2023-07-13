add_executable(
    AnotherExampleUTs
    AnotherExampleClass_tests.cpp
    )

target_link_libraries(AnotherExampleUTs PRIVATE GTest::gtest_main AnotherExample)

add_test(AnotherExampleTests AnotherExampleUTs)
