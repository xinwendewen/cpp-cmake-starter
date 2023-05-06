set(TEST_EXECUTABLE foo_test)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} TEST_SOURCES)

add_executable(${TEST_EXECUTABLE} ${TEST_SOURCES})

target_link_libraries(${TEST_EXECUTABLE} 
    GTest::gtest GTest::gmock GTest::gtest_main
    #gtest gmock gtest_main
    foo
    )
