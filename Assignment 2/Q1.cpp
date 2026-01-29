#include <iostream>
using namespace std;

int main() {
    int N, n;
    cin >> N >> n;

    if (N & (1 << n))
        cout << "Bit is SET";
    else
        cout << "Bit is CLEAR";

    return 0;
}
