cmake_minimum_required(VERSION 3.10)

project(dijkstra)

add_library(${PROJECT_NAME} src/dijkstra.cpp)
add_library(lib::dijkstra ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
