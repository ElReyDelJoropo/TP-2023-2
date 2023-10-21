#pragma once

#include <array>
#include <cstddef>
#include <iomanip>
#include <iostream>

template <typename T, size_t N, size_t M>
void imprimir_matriz(std::array<std::array<T, N>, M> arr, int wide = 1)
{
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < M; j++) {
            std::cout << std::setw(wide) << arr.at(i).at(j) << ' ';
        }
        std::cout << '\n';
    }
}
