cmake_minimum_required(VERSION 3.25)
project(CppReview)

set(CMAKE_CXX_STANDARD 17)

include_directories(".")

add_executable(CppReview.exe main.cpp Stash.cpp Stash.hpp StashMkII.hpp StashMkII.cpp StashMkIV.hpp StashMkIV.cpp StashMkV.cpp StashMkV.hpp BitVector.cpp BitVector.hpp
        datalog.cpp
        datalog.hpp)
