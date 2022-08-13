add_subdirectory("foo")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" APP_SOURCES)

add_executable(executable ${APP_SOURCES})

target_link_libraries(executable foo)
