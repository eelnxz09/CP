#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

int idx = 0;

int find(int in[], int l, int r, int val) {
    for (int i = l; i <= r; i++)
        if (in[i] == val) return i;
    return -1;
}

Node* build(int pre[], int in[], int l, int r) {
    if (l > r) return NULL;

    Node* root = new Node(pre[idx++]);
    int mid = find(in, l, r, root->data);

    root->left = build(pre, in, l, mid - 1);
    root->right = build(pre, in, mid + 1, r);

    return root;
}

void print(Node* root) {
    if (!root) return;
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}

int main() {
    int pre[] = {1,2,4,5,3};
    int in[]  = {4,2,5,1,3};

    Node* root = build(pre, in, 0, 4);
    print(root);
}
