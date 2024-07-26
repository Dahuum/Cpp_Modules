#include <iostream>
#include <vector>

class Graph {
    private:
        int numNodes;
        std::vector<std::vector<int>> edges;
    public:
        Graph(int n): numNodes(n) {
            edges.resize(n, std::vector<int>(n, 0));
        }
        void addEdges(int from, int to, int weight) {
            edges[from][to] = weight;
            edges[to][from] = weight;
        }
        void printGraph() {
            for (int i = 0; i < numNodes; ++i) {
                for (int j = 0; j < numNodes; ++j) {
                    std::cout << edges[i][j] << " ";
                }
                std::cout << std::endl;
            }
        }
};

int main(void) {
    Graph g(5);  // 5 cities
    g.addEdges(0, 1, 9);   // Road from A to B, 9 miles long
    g.addEdges(0, 2, 5);   // Road from A to C, 5 miles long
    g.addEdges(1, 3, 1);   // Road from B to D, 1 mile long
    g.addEdges(2, 3, 3);   // Road from C to D, 3 miles long
    g.addEdges(3, 4, 6);   // Road from D to E, 6 miles long
    g.printGraph();
}