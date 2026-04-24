#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& a, vector<int>& b) {
    vector<int> result;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            result.push_back(a[i]);
            i++; j++;
        } else if (a[i] < b[j]) i++;
        else j++;
    }
    return result;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9};
    vector<int> b = {3, 5, 6, 9, 10};
    vector<int> res = intersection(a, b);
    for (int x : res) cout << x << " "; // Output: 3 5 9
    return 0;
}
