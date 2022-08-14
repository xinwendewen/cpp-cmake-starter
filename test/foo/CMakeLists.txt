# set test executable file name
set(TEST_EXECUTABLE foo_test)

# tested source code
aux_source_directory("${PROJECT_SOURCE_DIR}/src/foo" FOO_SOURCES)

# test source code
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} FOO_TEST_SOURCES)

# add test executable
add_executable(${TEST_EXECUTABLE} ${FOO_SOURCES} ${FOO_TEST_SOURCES})

# link
target_link_libraries(${TEST_EXECUTABLE} gtest_main gmock)
