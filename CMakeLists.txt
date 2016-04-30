cmake_minimum_required(VERSION 3.2)

add_compile_options(-std=c++11)
add_compile_options(-Wall -Wextra -Werror)

add_executable (fib fib.cpp)

set(EXT_PROJECTS_DIR ${PROJECT_SOURCE_DIR}/vendor)

add_subdirectory(${EXT_PROJECTS_DIR}/catch)
include_directories(${CATCH_INCLUDE_DIR} ${COMMON_INCLUDES})
enable_testing(true)

add_subdirectory(tests)
