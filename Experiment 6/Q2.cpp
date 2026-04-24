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

    cout << "Enter element to find first occurrence: ";
    cin >> key;

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "First occurrence at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
