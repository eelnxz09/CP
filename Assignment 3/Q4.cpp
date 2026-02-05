#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    sort(str.begin(), str.end());

    cout << "All permutations of \"" << str << "\":" << endl;

    do
    {
        cout << str << endl;
    }
    while (next_permutation(str.begin(), str.end()));

    return 0;
}
