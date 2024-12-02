#include <iostream>
#include <queue>
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
    cout << root->data << " ";     // Visit the root
    inorderTraversal(root->right); // Traverse the right subtree
}

// Function to perform Postorder traversal (Left, Right, Root)
void postorderTraversal(Node* root) {
    if (root == nullptr) return;
    postorderTraversal(root->left);  // Traverse the left subtree
    postorderTraversal(root->right); // Traverse the right subtree
    cout << root->data << " ";       // Visit the root
}

// Function to perform Level Order traversal (Breadth-First Search)
void levelOrderTraversal(Node* root) {
    if (root == nullptr) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";

        if (current->left != nullptr) q.push(current->left);
        if (current->right != nullptr) q.push(current->right);
    }
}

// Function to insert a node in the binary tree at the first empty position (Level Order)
Node* insertNode(Node* root, int data) {
    Node* newNode = new Node(data);

    if (root == nullptr) {
        return newNode;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp->left == nullptr) {
            temp->left = newNode;
            break;
        } else {
            q.push(temp->left);
        }

        if (temp->right == nullptr) {
            temp->right = newNode;
            break;
        } else {
            q.push(temp->right);
        }
    }
    return root;
}

// Function to delete the tree and free memory
void deleteTree(Node* root) {
    if (root == nullptr) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    Node* root = nullptr;
    int choice, data;

    do {
        cout << "\nBinary Tree Operations Menu:\n";
        cout << "1. Insert a node\n";
        cout << "2. Preorder Traversal\n";
        cout << "3. Inorder Traversal\n";
        cout << "4. Postorder Traversal\n";
        cout << "5. Level Order Traversal\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data to insert: ";
                cin >> data;
                root = insertNode(root, data);
                break;

            case 2:
                cout << "Preorder Traversal: ";
                preorderTraversal(root);
                cout << endl;
                break;

            case 3:
                cout << "Inorder Traversal: ";
                inorderTraversal(root);
                cout << endl;
                break;

            case 4:
                cout << "Postorder Traversal: ";
                postorderTraversal(root);
                cout << endl;
                break;

            case 5:
                cout << "Level Order Traversal: ";
                levelOrderTraversal(root);
                cout << endl;
                break;

            case 6:
                cout << "Exiting the program and deleting the tree.\n";
                deleteTree(root);
                root = nullptr;
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
Binary Tree Operations Menu:
1. Insert a node
2. Preorder Traversal
3. Inorder Traversal
4. Postorder Traversal
5. Level Order Traversal
6. Exit
Enter your choice: 1
Enter the data to insert: 10

Binary Tree Operations Menu:
1. Insert a node
2. Preorder Traversal
3. Inorder Traversal
4. Postorder Traversal
5. Level Order Traversal
6. Exit
Enter your choice: 1
Enter the data to insert: 20

Binary Tree Operations Menu:
1. Insert a node
2. Preorder Traversal
3. Inorder Traversal
4. Postorder Traversal
5. Level Order Traversal
6. Exit
Enter your choice: 5
Level Order Traversal: 10 20
