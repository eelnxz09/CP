#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        // Closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty()) return false;

            char top = s.top();
            s.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    string str;
    cout << "Enter expression: ";
    cin >> str;

    if (isBalanced(str))
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}
