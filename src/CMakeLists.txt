add_subdirectory(Example)
add_subdirectory(AnotherExample)

add_executable(main main.cpp)
target_link_libraries(main Example AnotherExample)