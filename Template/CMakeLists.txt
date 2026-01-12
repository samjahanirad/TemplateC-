cmake_minimum_required(VERSION 3.15)
project(cpp_oop_example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main
    src/main.cpp
    src/Animal.cpp
)
