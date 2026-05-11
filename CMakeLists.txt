cmake_minimum_required(VERSION 3.10)
project(factorial)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(factorial_lib src/factorial.cpp)
target_include_directories(factorial_lib PUBLIC include)
add_executable(factorial src/main.cpp)
target_link_libraries(factorial factorial_lib)