#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* create(int data) {
    Node* n = new Node();
    n->data = data;
    n->left = n->right = NULL;
    return n;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = create(1);
    root->left = create(2);
    root->right = create(3);

    int choice;
    cout << "1.Inorder 2.Preorder 3.Postorder\n";
    cin >> choice;

    if (choice == 1) inorder(root);
    else if (choice == 2) preorder(root);
    else if (choice == 3) postorder(root);
}
