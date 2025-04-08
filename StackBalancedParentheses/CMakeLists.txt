
cmake_minimum_required(VERSION 3.10)
project(StackBalancedParentheses)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(StackBalancedParentheses Source.cpp)

# Adjust path relative to this directory
target_include_directories(StackBalancedParentheses PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../StackBassedArray/include
)