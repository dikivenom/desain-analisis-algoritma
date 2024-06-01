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
     
        root = new Node(30);
        root->left = new Node(29);
        root->right = new Node(32); 
        root->left->left = new Node(18); 
        root->left->right = new Node(33); 
    }

    void traversal() {

        if (root != NULL) {
            cout << root->left->data << " ";
            cout << root->data << " "; 
            cout << root->right->data << " ";
            cout << root->left->left->data << " "; 
            cout << root->left->right->data << " "; 
        }
    }
};

int main() {
    Tree tree;
    tree.traversal();
    return 0;
}

