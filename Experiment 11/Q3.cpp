#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int data) {
    if (!root) {
        Node* n = new Node();
        n->data = data;
        n->left = n->right = NULL;
        return n;
    }

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    Node* root = NULL;

    for (int i = 0; i < 6; i++) {
        root = insert(root, arr[i]);
    }

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}
