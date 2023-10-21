#include "ejercicio1.hpp"
#include "dijkstra.hpp"
#include <iostream>

int Ejercicio1::ejercicio1_main()
{
    constexpr int n = 7;
    //
    int start = T; // Nodo T
    int end = R;   // Nodo R

    Graph graph(n);

    // Definir los enlaces y sus probabilidades de operatividad
    graph[T].push_back({A, 0.99});
    graph[T].push_back({B, 0.97});
    graph[A].push_back({B, 0.99});
    graph[A].push_back({C, 0.95});
    graph[B].push_back({A, 0.99});
    graph[B].push_back({C, 0.98});
    graph[B].push_back({D, 0.96});
    graph[C].push_back({D, 0.99});
    graph[C].push_back({E, 0.98});
    graph[C].push_back({R, 0.94});
    graph[D].push_back({E, 0.97});
    graph[D].push_back({C, 0.99});
    graph[E].push_back({R, 0.97});

    std::vector<double> dist = dijkstra(graph, start);

    double reliability = dist[end];

    std::cout
        << "La ruta de máxima fiabilidad entre T y R tiene una probabilidad de "
        << reliability << std::endl;

    return 0;
}
