cmake_minimum_required(VERSION 3.25)
project(CppReview)

set(CMAKE_CXX_STANDARD 17)

add_executable(CppReview.exe main.cpp Stash.cpp Stash.hpp StashMkII.hpp StashMkII.cpp StashMkIV.hpp StashMkIV.cpp StashMkV.hpp StashMkV.cpp)
