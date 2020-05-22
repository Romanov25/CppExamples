cmake_minimum_required(VERSION 3.16)

project(CppExamples)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/_BIN)

add_executable(${PROJECT_NAME})

add_subdirectory(MAIN)
add_subdirectory(EXAMPLES)

get_target_property(SOURCE_FILES ${PROJECT_NAME} SOURCES)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES})

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/EXAMPLES)
target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIR})

set_directory_properties(PROPERTIES VS_STARTUP_PROJECT ${PROJECT_NAME})