cmake_minimum_required(VERSION 3.0.0)
project(advent-of-code2022 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(advent-of-code2022 main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
