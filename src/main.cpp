#include "dijkstra.hpp"
#include "ejercicio1.hpp"
#include "ejercicio2.hpp"
#include "ejercicio3.hpp"
#include "matriz.hpp"
#include "matriz_letras.hpp"
#include "menu.hpp"
#include <array>
#include <iostream>
#include <ostream>

int main(int argc, char *argv[])
{
    int opcion = 0;

    while (opcion != 4) {
        opcion = crear_menu(
            {"Dijkstra", "Matriz de letras", "Matriz de numeros", "Salir"});
        switch (opcion) {
        case 1:
            Ejercicio1::ejercicio1_main();
            break;
        case 2:
            Ejercicio2::ejercicio2_main();
            break;

        case 3:
            Ejercicio3::ejercicio3_main();
            break;
        default:

            break;
        }
    }
    return 0;
}
