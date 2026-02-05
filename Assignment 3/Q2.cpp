#include <iostream>
using namespace std;

int sod(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sod(n / 10);
}

int main()
{
    int N;
    cin >> N;
    cout << sod(N) << endl;
    return 0;
}
