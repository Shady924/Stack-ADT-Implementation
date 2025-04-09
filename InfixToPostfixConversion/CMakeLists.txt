
cmake_minimum_required(VERSION 3.10)

project(InfixToPostfixConversion)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create the executable
add_executable(InfixToPostfixConversion main.cpp)

# Set include directories
target_include_directories(InfixToPostfixConversion PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}                   # For InfixToPostfixConversion.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../StackBassedArray/include  # For StackBassedArray.h
)