#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N & 1)
        cout << "Odd";
    else
        cout << "Even";

    return 0;
}

