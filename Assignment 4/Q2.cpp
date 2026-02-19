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

    int flag = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        cout << "Array is sorted";
    } else {
        
        cout << "Array is not sorted";
    }

    return 0;
}
