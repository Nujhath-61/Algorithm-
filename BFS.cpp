#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int source, vector<vector<int>> &graph) {
    int n = graph.size();
    vector<bool> visited(n, false);
    queue<int> q;

    visited[source] = true;
    q.push(source);

    cout << "BFS traversal: ";
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";

        for (int i = 0; i < graph[current].size(); i++) {
            int neighbor = graph[current][i];
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main() {
    int V, E;
    cout << "Enter total vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> graph(V);
    cout << "Enter Edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // Undirected graph
    }

    int s;
    cout << "Enter source vertex: ";
    cin >> s;

    if (s < 0 || s >= V) {
        cout << "Invalid source vertex." << endl;
        return 1;
    }

    bfs(s, graph);
    return 0;
}

