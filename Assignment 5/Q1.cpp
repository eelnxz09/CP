#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, size;
    cout << "Enter hash table size: ";
    cin >> size;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> hash[size];

    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;
        int index = value % size;
        hash[index].push_back(value);
    }

    cout << "\nHash Table:\n";
    for(int i = 0; i < size; i++) {
        cout << i << " -> ";
        for(int val : hash[i])
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
