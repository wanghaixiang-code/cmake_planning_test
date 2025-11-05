cmake_minimum_required(VERSION 3.29.0)

project(process)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_BUILD_TYPE Debug)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(. SRC_LISTS)

add_compile_options(-g) 

add_executable(process_main ${SRC_LISTS})