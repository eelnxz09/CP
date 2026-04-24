#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);

    cout << "Deque elements: ";
    for (int x : dq) {
        cout << x << " ";
    }

    dq.pop_front();
    dq.pop_back();

    cout << "\nAfter deletion: ";
    for (int x : dq) {
        cout << x << " ";
    }

    return 0;
}
