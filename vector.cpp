#include <iostream>
using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a new node in the binary tree
Node* insertNode(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }

    return root;
}

// Function to print the tree in in-order traversal
void inOrderTraversal(Node* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    Node* root = nullptr;
    root = insertNode(root, 10);
    insertNode(root, 5);
    insertNode(root, 15);
    insertNode(root, 3);
    insertNode(root, 7);

    cout << "In-order traversal of the binary tree: ";
    inOrderTraversal(root);

    return 0;
}
