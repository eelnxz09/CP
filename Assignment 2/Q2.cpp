#include <iostream>
using namespace std;

int main() {
    int n, maxAnd = 0;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            maxAnd = max(maxAnd, a[i] & a[j]);

    cout << maxAnd;
    return 0;
}
