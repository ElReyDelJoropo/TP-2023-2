#pragma once

#include <vector>

namespace Ejercicio1 {

struct Edge {
    int to;
    double weight;
};

using Graph = std::vector<std::vector<Edge>>;

extern std::vector<double> dijkstra(const Graph &graph, int start);
} // namespace Ejercicio1
