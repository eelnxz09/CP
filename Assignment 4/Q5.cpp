#include <iostream>
using namespace std;

void printLeaders(int arr[], int n) {
    // The rightmost element is ALWAYS a leader
    int maxRight = arr[n - 1];
    cout << maxRight << " ";

    // Scan from right to left (n-2 down to 0)
    for (int i = n - 2; i >= 0; i--) {
        // If current element is bigger than the biggest seen so far on the right
        if (arr[i] > maxRight) {
            cout << arr[i] << " ";
            maxRight = arr[i]; // Update the new leader
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // FIX: Create an array that can hold 'n' elements
    int arr[n]; 

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Leaders (printed right to left): ";
    printLeaders(arr, n);

    return 0;
}
