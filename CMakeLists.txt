cmake_minimum_required(VERSION 3.17)

project(
    CMakeTutorial
    VERSION 1.0
    DESCRIPTION "A CMake Tutorial"
    LANGUAGES CXX
)

add_executable(
    add
    src/sorts.h
    src/main.cpp
    src/bubble.cpp
)