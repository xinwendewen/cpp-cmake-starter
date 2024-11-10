set(TEST_BIN bar_test)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/out/test/bar/bin")
set(TEST_CONF_DIR "${CMAKE_BINARY_DIR}/out/test/bar/conf")
set(TEST_DEP_DIR "${CMAKE_BINARY_DIR}/out/test/bar/dep")

file(MAKE_DIRECTORY ${TEST_CONF_DIR})
file(MAKE_DIRECTORY ${TEST_DEP_DIR})

file(GLOB SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.h" # private headers
    )

add_executable(${TEST_BIN} ${SOURCES})

target_link_libraries(${TEST_BIN}
    GTest::gtest GTest::gmock GTest::gtest_main
    #gtest gmock gtest_main
    )

# copy test conf when build
add_custom_target(copy_${TEST_BIN}_conf ALL
    COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/conf/ ${TEST_CONF_DIR} # copy conf dir
)
