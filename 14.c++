#include <iostream>
using namespace std;

// Structure to represent a stack
struct Stack {
    int arr[100];
    int top;

    // Constructor to initialize the stack
    Stack() {
        top = -1;  // Initially, stack is empty
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == 99;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to insert an element into the stack (push)
    void push(int data) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << data << endl;
        } else {
            arr[++top] = data;
            cout << "Pushed " << data << " to the stack." << endl;
        }
    }

    // Function to remove an element from the stack (pop)
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
        } else {
            cout << "Popped " << arr[top--] << " from the stack." << endl;
        }
    }

    // Function to display the elements of the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    int choice, data;

    // Menu-driven program to perform stack operations
    do {
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push an element to the stack\n";
        cout << "2. Pop an element from the stack\n";
        cout << "3. Display the stack\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data to push onto the stack: ";
                cin >> data;
                stack.push(data);
                break;

            case 2:
                stack.pop();
                break;

            case 3:
                stack.display();
                break;

            case 4:
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
// Stack Operations Menu:
// 1. Push an element to the stack
// 2. Pop an element from the stack
// 3. Display the stack
// 4. Exit
// Enter your choice: 1
// Enter the data to push onto the stack: 10
// Pushed 10 to the stack.

// Stack Operations Menu:
// 1. Push an element to the stack
// 2. Pop an element from the stack
// 3. Display the stack
// 4. Exit
// Enter your choice: 1
// Enter the data to push onto the stack: 20
// Pushed 20 to the stack.

// Stack Operations Menu:
// 1. Push an element to the stack
// 2. Pop an element from the stack
// 3. Display the stack
// 4. Exit
// Enter your choice: 3
// Stack elements: 20 10

// Stack Operations Menu:
// 1. Push an element to the stack
// 2. Pop an element from the stack
// 3. Display the stack
// 4. Exit
// Enter your choice: 2
// Popped 20 from the stack.

// Stack Operations Menu:
// 1. Push an element to the stack
// 2. Pop an element from the stack
// 3. Display the stack
// 4. Exit
// Enter your choice: 3
// Stack elements: 10

// Stack Operations Menu:
// 1. Push an element to the stack
// 2. Pop an element from the stack
// 3. Display the stack
// 4. Exit
// Enter your choice: 4
// Exiting 
