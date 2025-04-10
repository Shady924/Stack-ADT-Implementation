
cmake_minimum_required(VERSION 3.10)

project(evaluatePostfix)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create the executable
add_executable(evaluatePostfix main.cpp)

target_include_directories(evaluatePostfix PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR} 
    ${CMAKE_CURRENT_SOURCE_DIR}/../StackBassedArray/include         # For StackBassedArray.h
    ${CMAKE_CURRENT_SOURCE_DIR}/../InfixToPostfixConversion         # For InfixToPostfixConversion.h
)