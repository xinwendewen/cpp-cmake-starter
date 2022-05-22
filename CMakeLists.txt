cmake_minimum_required(VERSION 3.15)

project(a-cpp-project)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

# the -I flag in gcc
include_directories(
  ${PROJECT_SOURCE_DIR}/include/
)

set(APP_SOURCES src/main.cpp)
set(LIB_SOURCES src/foo/foo.cpp)

add_executable(executable ${APP_SOURCES})

# shared library
set(LIBRARY_NAME foo)
add_library(${LIBRARY_NAME} SHARED ${LIB_SOURCES})
target_link_libraries(executable ${LIBRARY_NAME})

