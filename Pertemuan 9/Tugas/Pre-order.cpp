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
        root = new Node(18);
        root->left = new Node(30);
        root->left->left = new Node(29);
        root->left->right = new Node(32);
        root->left->right->right = new Node(33);
    }

    void preOrderTraversal(Node* node) {
        if (node == NULL) return;
        cout << node->data << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    void traversal() {
        preOrderTraversal(root);
    }
};

int main() {
    Tree tree;
    tree.traversal();
    return 0;
}

