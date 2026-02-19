#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int largest = a[0];
    int secondlargest = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            secondlargest = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > secondlargest) {
            secondlargest = a[i];
        }
    }

    cout << "Second largest element is: " << secondlargest;

    return 0;
}
