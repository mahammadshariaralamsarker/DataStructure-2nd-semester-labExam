#include <iostream>
using namespace std;

// Structure to represent a node in the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to create a new node
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Function to perform Preorder traversal (Root, Left, Right)
void preorderTraversal(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " "; // Visit the root
    preorderTraversal(root->left);  // Traverse the left subtree
    preorderTraversal(root->right); // Traverse the right subtree
}

// Function to perform Inorder traversal (Left, Root, Right)
void inorderTraversal(Node* root) {
    if (root == nullptr) return;

    inorderTraversal(root->left);  // Traverse the left subtree
    cout << root->data << " "; // Visit the root
    inorderTraversal(root->right); // Traverse the right subtree
}

// Function to perform Postorder traversal (Left, Right, Root)
void postorderTraversal(Node* root) {
    if (root == nullptr) return;

    postorderTraversal(root->left); // Traverse the left subtree
    postorderTraversal(root->right); // Traverse the right subtree
    cout << root->data << " "; // Visit the root
}

int main() {
    // Creating a sample binary tree:
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    // Traversing the binary tree in different orders

    cout << "Preorder Traversal: ";
    preorderTraversal(root);  // Output: 1 2 4 5 3 6
    cout << endl;

    cout << "Inorder Traversal: ";
    inorderTraversal(root);   // Output: 4 2 5 1 3 6
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root); // Output: 4 5 2 6 3 1
    cout << endl;

    return 0;
}
// Preorder Traversal: 1 2 4 5 3 6 
// Inorder Traversal: 4 2 5 1 3 6 
// Postorder Traversal: 4 5 2 6 3 1
