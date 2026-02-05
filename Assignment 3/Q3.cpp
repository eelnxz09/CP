#include <iostream>
using namespace std;

int power(int n, int m)
{
    if (m == 0)
        return 1;

    return n * power(n, m - 1);
}

int main()
{
    int N, M;
    cout << "Enter base (N): ";
    cin >> N;

    cout << "Enter power (M): ";
    cin >> M;

    cout << "Result: " << power(N, M) << endl;
    return 0;
}
