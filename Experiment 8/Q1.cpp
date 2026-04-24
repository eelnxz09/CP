#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    string rev = s;
    reverse(rev.begin(), rev.end());

    if(s == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
}
