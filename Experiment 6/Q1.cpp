#include <iostream>
using namespace std;

int main()
{
    int n, key;

    cout << "Enter size: ";
    cin >> n;

    int a[n];

    cout << "Enter sorted array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            a[mid] = a[mid] * 3;
            break;
        }
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Array after operation: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
