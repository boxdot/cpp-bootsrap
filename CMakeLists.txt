cmake_minimum_required(VERSION 3.2)

add_compile_options(-std=c++11)
add_compile_options(-Wall -Wextra -Werror)

option(COVERAGE "Generate coverage data" OFF)
if(COVERAGE)
    add_compile_options(-O0 -g)
    add_compile_options(-fprofile-arcs -ftest-coverage)
    set(CMAKE_EXE_LINKER_FLAGS --coverage)
endif(COVERAGE)

add_executable (fib fib.cpp)

set(EXT_PROJECTS_DIR ${PROJECT_SOURCE_DIR}/vendor)

add_subdirectory(${EXT_PROJECTS_DIR}/catch)
include_directories(${CATCH_INCLUDE_DIR} ${COMMON_INCLUDES})
enable_testing(true)

add_subdirectory(tests)
