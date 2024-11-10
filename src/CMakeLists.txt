# binary
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/out/bin")
# static libaraies
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/out/lib")
# shared libaraies
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/out/lib")

add_subdirectory("bar")
add_subdirectory("foo")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" APP_SOURCES)

add_executable(executable ${APP_SOURCES})

target_link_libraries(executable foo)
