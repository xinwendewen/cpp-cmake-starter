cmake_minimum_required(VERSION 3.15)

project(a-cpp-project)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-w -Wall -Werror)

# the -I flag in gcc
include_directories(
  ${PROJECT_SOURCE_DIR}/include/
)

add_subdirectory("src")
add_subdirectory("test")


