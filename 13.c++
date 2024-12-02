#include <iostream>
using namespace std;

// Structure to represent a node in the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning of the list
void insertAtBeginning(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to delete a node from the beginning of the list
void deleteFromBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Function to delete a node from the end of the list
void deleteFromEnd(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next && temp->next->next) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

// Function to display the linked list
void displayList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;  // Initially, the list is empty
    int choice, data;

    // Menu-driven program to perform linked list operations
    do {
        cout << "\nLinked List Operations Menu:\n";
        cout << "1. Insert at the beginning\n";
        cout << "2. Insert at the end\n";
        cout << "3. Delete from the beginning\n";
        cout << "4. Delete from the end\n";
        cout << "5. Display the list\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data to insert at the beginning: ";
                cin >> data;
                insertAtBeginning(head, data);
                cout << "Element inserted at the beginning.\n";
                break;

            case 2:
                cout << "Enter the data to insert at the end: ";
                cin >> data;
                insertAtEnd(head, data);
                cout << "Element inserted at the end.\n";
                break;

            case 3:
                deleteFromBeginning(head);
                cout << "Element deleted from the beginning.\n";
                break;

            case 4:
                deleteFromEnd(head);
                cout << "Element deleted from the end.\n";
                break;

            case 5:
                displayList(head);
                break;

            case 6:
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
// Linked List Operations Menu:
// 1. Insert at the beginning
// 2. Insert at the end
// 3. Delete from the beginning
// 4. Delete from the end
// 5. Display the list
// 6. Exit
// Enter your choice: 1
// Enter the data to insert at the beginning: 10
// Element inserted at the beginning.

// Linked List Operations Menu:
// 1. Insert at the beginning
// 2. Insert at the end
// 3. Delete from the beginning
// 4. Delete from the end
// 5. Display the list
// 6. Exit
// Enter your choice: 2
// Enter the data to insert at the end: 20
// Element inserted at the end.

// Linked List Operations Menu:
// 1. Insert at the beginning
// 2. Insert at the end
// 3. Delete from the beginning
// 4. Delete from the end
// 5. Display the list
// 6. Exit
// Enter your choice: 5
// List elements: 10 20

// Linked List Operations Menu:
// 1. Insert at the beginning
// 2. Insert at the end
// 3. Delete from the beginning
// 4. Delete from the end
// 5. Display the list
// 6. Exit
// Enter your choice: 3
// Element deleted from the beginning.

// Linked List Operations Menu:
// 1. Insert at the beginning
// 2. Insert at the end
// 3. Delete from the beginning
// 4. Delete from the end
// 5. Display the list
// 6. Exit
// Enter your choice: 5
// List elements: 20
