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
        root->right = new Node(33);
        root->left->left = new Node(29);
        root->left->right = new Node(32);
    }

    void postorder(Node* node) {
        if (node == NULL) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
};

int main() {
    Tree tree;
    tree.postorder(tree.root);
    return 0;
}

