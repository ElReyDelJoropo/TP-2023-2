#include "ejercicio3.hpp"
#include "matriz.hpp"
#include "matriz_numeros.hpp"
#include <array>
#include <cstddef>
#include <iostream>
#include <random>

int Ejercicio3::random_int()
{
    std::random_device rd;
    std::default_random_engine engine(rd());
    std::uniform_int_distribution<> dist(-255, 255);

    return dist(engine);
}

int Ejercicio3::ejercicio3_main()
{
    constexpr int FILAS = 10;
    constexpr int COLUMNAS = 10;

    std::array<std::array<int, FILAS>, COLUMNAS> arr1, arr2;

    for (size_t i = 0; i < FILAS; i++) {
        for (size_t j = 0; j < COLUMNAS; j++) {
            arr1.at(i).at(j) = random_int();
            arr2.at(i).at(j) = random_int();
        }
    }

    std::cout << "\nPrimera matriz:\n";
    imprimir_matriz(arr1, 4);

    std::cout << "\nSegunda matriz:\n";
    imprimir_matriz(arr2, 4);

    Result r1 = buscar_en_matriz(arr1);
    Result r2 = buscar_en_matriz(arr2);

    std::cout << "\nPrimera matriz:\nNumeros pares: " << r1.odd
              << "\nMayores que cero: " << r1.gt_zero << "\n\nSegunda matriz:"
              << "\nNumeros pares: " << r2.odd
              << "\nMayores que cero: " << r2.gt_zero << '\n';
    return 0;
}
