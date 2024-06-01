#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class Tree {
public:
    Node* root;
    Tree() {
        root = NULL;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    Node* insert(Node* node, int value) {
        if (node == NULL) {
            node = new Node(value);
        } else if (value <= node->data) {
            node->left = insert(node->left, value);
        } else {
            node->right = insert(node->right, value);
        }
        return node;
    }

    void preOrder() {
        preOrder(root);
        cout << endl;
    }

    void preOrder(Node* node) {
        if (node == NULL) return;
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void inOrder() {
        inOrder(root);
        cout << endl;
    }

    void inOrder(Node* node) {
        if (node == NULL) return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    void postOrder() {
        postOrder(root);
        cout << endl;
    }

    void postOrder(Node* node) {
        if (node == NULL) return;
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
};

int main() {
    Tree tree;
    int treeArray[] = {12, 16, 20, 24, 32};
    const int N = 5; 
    for (int i = 0; i < N; ++i) {
        tree.insert(treeArray[i]);
    }

    cout << "versi Pre-order: ";
    tree.preOrder();

    cout << "versi In-order: ";
    tree.inOrder();

    cout << "versi Post-order: ";
    tree.postOrder();

    return 0;
}

