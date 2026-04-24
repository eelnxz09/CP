#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 4;
    vector<int> adj[4];

    // edges
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[0].push_back(3);
    adj[3].push_back(0);

    adj[1].push_back(2);
    adj[2].push_back(1);

    cout << "Adjacency List:\n";
    for (int i = 0; i < n; i++) {
        cout << i << " -> ";
        for (int x : adj[i]) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
