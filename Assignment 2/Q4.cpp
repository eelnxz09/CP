#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        sum += log10(i);

    cout << (int)sum + 1;
    return 0;
}
