cmake_minimum_required(VERSION 3.10)
project(factorial VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(factorial_lib src/factorial.cpp)
add_executable(factorial src/main.cpp)
target_link_libraries(factorial factorial_lib)