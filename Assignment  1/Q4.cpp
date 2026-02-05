#include <iostream>
using namespace std;

int main() {
    int m, n;
    long long result = 1;

    cout << "Enter M and N: ";
    cin >> m >> n;

    for (int i = 1; i <= n; i++) {
        result *= m;
    }

    cout << "Result: " << result;
    return 0;
}
