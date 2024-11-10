set(LIB_NAME bar)

file(GLOB SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/*.h" # private headers
    )

add_library(${LIB_NAME} SHARED ${SOURCES})

# public headers
target_include_directories(${LIB_NAME}
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    )

# private headers
target_include_directories(${LIB_NAME}
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

# public dependencies
target_link_libraries(${LIB_NAME}
    PUBLIC
    #abc
    )
# private dependencies
target_link_libraries(${LIB_NAME}
    PRIVATE
    #xyz
    )
