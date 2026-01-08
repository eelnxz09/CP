#include <iostream>
#include <string>
using namespace std;

class WordCount {
public:
    string s;
    int c = 0;

    void accept() {
        cout << "Enter a string: ";
        getline(cin, s);
    }

    void count() {
        c = 0; 
        for(int i = 0; i < s.length(); i++) {
           
            if (s[i] != ' ' && (i == 0 || s[i-1] == ' ')) {
                c++;
            }
        }
        cout << "Number of words in the string = " << c << endl;
    }
};

int main() {
    WordCount w;
    w.accept();
    w.count();
    return 0;
}
