set(LIBRARY_NAME foo)

file(GLOB SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.h" # private headers
    )

add_library(${LIBRARY_NAME} STATIC ${SOURCES})

target_include_directories(${LIBRARY_NAME}
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    # ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

target_link_libraries(
    ${LIBRARY_NAME}
    PRIVATE
    #dependency1
    )
