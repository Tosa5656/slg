cmake_minimum_required(VERSION 3.31)

set(PROJECT_NAME slg)
set(CMAKE_CXX_STANDARD 20)

project(${PROJECT_NAME})

include_directories("include/")
set(PROJECT_SOURCES src/main.cpp
                    src/args/args.cpp
					src/preparation/preparation.cpp
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
					COMMAND ${CMAKE_COMMAND} -E copy_directory
					${CMAKE_SOURCE_DIR}/resources $<TARGET_FILE_DIR:${PROJECT_NAME}>/)