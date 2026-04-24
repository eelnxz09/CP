#include <iostream>
using namespace std;

int main() {
    string s, findstr;
    cout << "Enter main string: ";
    cin >> s;
    cout << "Enter substring: ";
    cin >> findstr;

    int pos = s.find(findstr);

    if(pos != string::npos) cout << "Found at index: " << pos;
    else cout << -1;
}
