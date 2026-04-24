#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kthSmallest(vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    return arr[k - 1];
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3;
    cout << "Kth Smallest: " << kthSmallest(arr, k); // Output: 7
    return 0;
}
