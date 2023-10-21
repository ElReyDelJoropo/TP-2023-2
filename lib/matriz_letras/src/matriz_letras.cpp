#include "matriz_letras.hpp"
void Ejercicio2::ordernar_matriz_letras(
    std::array<std::array<char, 20>, 20> &matriz)
{
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            int minIndex = j;
            for (int k = j + 1; k < 20; k++) {
                if (matriz[i][k] < matriz[i][minIndex]) {
                    minIndex = k;
                }
            }
            std::swap(matriz[i][j], matriz[i][minIndex]);
        }
    }
}
