#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findTriplets(vector<int> arr) {
    int n = arr.size();
    bool found = false;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == 0) {
                cout << arr[i] << " " << arr[left] << " " << arr[right] << "\n";
                found = true;
                left++; right--;
            } else if (sum < 0) left++;
            else right--;
        }
    }
    if (!found) cout << "No triplets found.\n";
}

int main() {
    vector<int> arr = {0, -1, 2, -3, 1};
    findTriplets(arr); // Output: -3 1 2 / -1 0 1
    return 0;
}
