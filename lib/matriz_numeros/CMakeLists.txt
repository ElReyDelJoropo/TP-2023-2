cmake_minimum_required(VERSION 3.10)

project(matriz_numeros)

add_library(${PROJECT_NAME} src/matriz_numeros.cpp)
add_library(lib::matriz_numeros ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
