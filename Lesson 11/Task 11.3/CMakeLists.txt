cmake_minimum_required(VERSION 3.22.0)

project(DynamicLIBinCMake)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(DynamicLIB SHARED Leaver.h Leaver.cpp)

add_executable(DynamicLIBinCMake DynamicLIBinCMake.cpp)

target_link_libraries(DynamicLIBinCMake DynamicLIB)