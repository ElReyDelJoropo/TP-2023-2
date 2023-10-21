#include "ejercicio2.hpp"
#include "matriz.hpp"
#include "matriz_letras.hpp"
#include <array>
#include <cstddef>
#include <iostream>
#include <random>

char Ejercicio2::random_char()
{
    std::string characters =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    std::random_device rd;
    std::default_random_engine engine(rd());
    std::uniform_int_distribution<> dist(0, characters.size() - 1);

    return characters.at(dist(engine));
}

int Ejercicio2::ejercicio2_main()
{
    std::array<std::array<char, 20>, 20> arr;

    for (size_t i = 0; i < 20; i++) {
        for (size_t j = 0; j < 20; j++) {
            arr[i][j] = random_char();
        }
    }

    imprimir_matriz(arr);

    std::cout << "\nMatriz ordenada:\n";

    ordernar_matriz_letras(arr);

    imprimir_matriz(arr);

    return 0;
}
