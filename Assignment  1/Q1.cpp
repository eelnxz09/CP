#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, s);

    stringstream ss(s);
    string word;

    while (ss >> word) {
        count++;
    }

    cout << "Number of words: " << count;
    return 0;
}
