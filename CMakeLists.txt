cmake_minimum_required(VERSION 3.22.1)
project(Snippets)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(Example)
add_executable(main main.cpp)
target_link_libraries(main Example)