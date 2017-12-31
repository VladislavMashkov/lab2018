cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)

project(main)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_link_libraries(main)