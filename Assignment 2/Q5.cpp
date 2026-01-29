#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    if (n == 0) count = 1;
    while (n != 0) {
        count++;
        n /= 10;
    }

    cout << count;
    return 0;
}
