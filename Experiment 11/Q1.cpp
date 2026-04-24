#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int search(int inorder[], int start, int end, int val) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == val)
            return i;
    }
    return -1;
}

Node* buildTree(int preorder[], int inorder[], int start, int end, int &index) {
    if (start > end) return NULL;

    Node* node = new Node();
    node->data = preorder[index++];
    node->left = node->right = NULL;

    if (start == end) return node;

    int pos = search(inorder, start, end, node->data);

    node->left = buildTree(preorder, inorder, start, pos - 1, index);
    node->right = buildTree(preorder, inorder, pos + 1, end, index);

    return node;
}

void inorderPrint(Node* root) {
    if (!root) return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

int main() {
    int preorder[] = {1,2,4,5,3};
    int inorder[] = {4,2,5,1,3};
    int n = 5, index = 0;

    Node* root = buildTree(preorder, inorder, 0, n-1, index);

    cout << "Inorder: ";
    inorderPrint(root);
}
