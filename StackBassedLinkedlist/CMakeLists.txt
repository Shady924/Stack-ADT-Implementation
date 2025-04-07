
cmake_minimum_required(VERSION 3.10)

project(StackBassedLinkedlist)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)


# Create the executable
add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC include)

add_subdirectory(src)
