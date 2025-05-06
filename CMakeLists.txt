cmake_minimum_required(VERSION 3.10)
project(madlib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra)

add_executable(${PROJECT_NAME} madlib.c words.c words.h)

target_link_libraries(${PROJECT_NAME} PRIVATE)

