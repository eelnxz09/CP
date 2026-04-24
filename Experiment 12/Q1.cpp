#include <iostream>
using namespace std;

int main() {
    int n = 4; // number of vertices (0,1,2,3)

    int adj[4][4] = {0};

    // edges based on given graph
    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[0][3] = adj[3][0] = 1;
    adj[1][2] = adj[2][1] = 1;

    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
