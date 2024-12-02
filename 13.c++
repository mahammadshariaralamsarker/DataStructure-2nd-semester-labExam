#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at the beginning
void insertAtBeginning(Node*& head, int data) {
    Node* newNode = new Node{data, head};
    head = newNode;
}

// Insert at the end
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node{data, nullptr};
    if (!head) head = newNode;
    else {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}

// Delete from the beginning
void deleteFromBeginning(Node*& head) {
    if (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Delete from the end
void deleteFromEnd(Node*& head) {
    if (!head) return;
    if (!head->next) {
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next->next) temp = temp->next;
    delete temp->next;
    temp->next = nullptr;
}

// Display the list
void displayList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int choice, data;

    do {
        cin >> choice;
        switch (choice) {
            case 1: cin >> data; insertAtBeginning(head, data); break;
            case 2: cin >> data; insertAtEnd(head, data); break;
            case 3: deleteFromBeginning(head); break;
            case 4: deleteFromEnd(head); break;
            case 5: displayList(head); break;
        }
    } while (choice != 6);

    return 0;
}
1 10  // Insert 10 at the beginning
2 20  // Insert 20 at the end
5     // Display the list: 10 20
3     // Delete from the beginning
5     // Display the list: 20
6     // Exit
