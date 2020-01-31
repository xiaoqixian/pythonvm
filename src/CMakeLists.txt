cmake_minimum_required(VERSION 2.8)

PROJECT(ARMOR)

SET(CMAKE_CXX_FLAGS_DEBUG "-O0 -Wall -g -ggdb -rdynamic")
SET(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall -rdynamic")

ADD_EXECUTABLE(armor main.cpp
    object/PyInteger.cpp
    object/PyString.cpp
    util/arrayList.cpp
    code/binaryFileParser.cpp
    code/codeObject.cpp)

INCLUDE_DIRECTORIES(./)
