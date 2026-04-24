#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s;
    cout << "Enter sentence: ";
    getline(cin, s);

    stringstream ss(s);
    string word, result = "";

    while(ss >> word) result = word + " " + result;

    cout << result;
}
