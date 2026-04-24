#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int x) {
        Node* temp = new Node();
        temp->data = x;
        temp->next = top;
        top = temp;
        cout << x << " pushed\n";
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
        } else {
            cout << top->data << " popped\n";
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void display() {
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(15);
    s.push(25);
    s.display();
    s.pop();
    s.display();
    return 0;
}
