#include <iostream>
using namespace std;

int main() {
    int n = 4;

    int adj[4][4] = {
        {0,1,1,1},
        {1,0,1,0},
        {1,1,0,0},
        {1,0,0,0}
    };

    int edges = 0;

    // count edges
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (adj[i][j] == 1)
                edges++;
        }
    }

    // divide by 2 (undirected graph)
    cout << "Total edges: " << edges / 2;

    return 0;
}
