#include <iostream>
using namespace std;

int main() {
    int n, size;
    cout << "Enter hash table size: ";
    cin >> size;

    int hash[size];
    for(int i = 0; i < size; i++)
        hash[i] = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;

        int index = value % size;

        if(hash[index] == -1 || hash[index] == value) {
            hash[index] = value;  // same or empty
        } else {
            int newIndex = (value + 1) % size;
            hash[newIndex] = value;
        }
    }

    cout << "\nHash Table:\n";
    for(int i = 0; i < size; i++)
        cout << i << " -> " << hash[i] << endl;

    return 0;
}
