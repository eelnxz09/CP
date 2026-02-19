#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n]; // Create the array
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int position = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[position] = arr[i];
            position++;
        }
    }

    for (int i = position; i < n; i++) {
        arr[i] = 0;
    }

    cout << "Result: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
