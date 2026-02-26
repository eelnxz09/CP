#include <iostream>
using namespace std;

int main() {
    int n, size;

    cout << "Enter hash table size: ";
    cin >> size;

    int hash[size];

    // Initialize hash table with -1
    for(int i = 0; i < size; i++)
        hash[i] = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter distinct integers:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Insert elements using linear probing
    for(int i = 0; i < n; i++) {
        int key = arr[i];
        int index = key % size;

        // Linear probing if collision
        while(hash[index] != -1) {
            index = (index + 1) % size;
        }

        hash[index] = key;
    }

    // Display hash table
    cout << "\nHash Table:\n";
    for(int i = 0; i < size; i++) {
        cout << i << " -> ";
        if(hash[i] == -1)
            cout << "Empty";
        else
            cout << hash[i];
        cout << endl;
    }

    return 0;
}
