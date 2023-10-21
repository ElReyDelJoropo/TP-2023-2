cmake_minimum_required(VERSION 3.10)

project(matriz_letras)

add_library(${PROJECT_NAME} src/matriz_letras.cpp)
add_library(lib::matriz_letras ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
