#include "dijkstra.hpp"
#include <queue>
#include <vector>
using std::vector;

vector<double> Ejercicio1::dijkstra(const Graph &graph, int start)
{
    const int INF = 1e9;
    int n = graph.size();
    std::vector<double> dist(n, 0);
    std::vector<bool> visited(n, false);

    dist[start] = 1.0;

    std::priority_queue<std::pair<double, int>> pq;
    pq.push(std::make_pair(1.0, start));

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (visited[u]) {
            continue;
        }

        visited[u] = true;

        for (const Edge &edge : graph[u]) {
            int v = edge.to;
            double weight = edge.weight;

            if (dist[u] * weight > dist[v]) {
                dist[v] = dist[u] * weight;
                pq.push(std::make_pair(dist[v], v));
            }
        }
    }

    return dist;
}
