find_package(GTest CONFIG REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_subdirectory("bar")
add_subdirectory("foo")
