#include <iostream>
using namespace std;

const int MAX_SIZE = 100;  // Maximum size of the queue

// Structure to represent a queue
struct Queue {
    int arr[MAX_SIZE];
    int front, rear;

    // Constructor to initialize the queue
    Queue() : front(-1), rear(-1) {}

    // Function to check if the queue is full
    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1 || front > rear;
    }

    // Function to insert an element into the queue (enqueue)
    void enqueue(int data) {
        if (isFull()) {
            cout << "Error: Queue overflow. Cannot enqueue " << data << "." << endl;
        } else {
            if (front == -1) {
                front = 0;  // Initialize front on first enqueue
            }
            arr[++rear] = data;
            cout << "Enqueued " << data << " to the queue." << endl;
        }
    }

    // Function to remove an element from the queue (dequeue)
    void dequeue() {
        if (isEmpty()) {
            cout << "Error: Queue underflow. Cannot dequeue." << endl;
        } else {
            cout << "Dequeued " << arr[front++] << " from the queue." << endl;
            if (front > rear) {
                front = rear = -1;  // Reset queue when empty
            }
        }
    }

    // Function to display the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue queue;
    int choice, data;

    // Menu-driven program to perform queue operations
    do {
        cout << "\nQueue Operations Menu:\n";
        cout << "1. Enqueue an element to the queue\n";
        cout << "2. Dequeue an element from the queue\n";
        cout << "3. Display the queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data to enqueue into the queue: ";
                cin >> data;
                queue.enqueue(data);
                break;

            case 2:
                queue.dequeue();
                break;

            case 3:
                queue.display();
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
Queue Operations Menu:
1. Enqueue an element to the queue
2. Dequeue an element from the queue
3. Display the queue
4. Exit
Enter your choice: 1
Enter the data to enqueue into the queue: 10
Enqueued 10 to the queue.

Queue Operations Menu:
1. Enqueue an element to the queue
2. Dequeue an element from the queue
3. Display the queue
4. Exit
Enter your choice: 1
Enter the data to enqueue into the queue: 20
Enqueued 20 to the queue.

Queue Operations Menu:
1. Enqueue an element to the queue
2. Dequeue an element from the queue
3. Display the queue
4. Exit
Enter your choice: 3
Queue elements: 10 20 

Queue Operations Menu:
1. Enqueue an element to the queue
2. Dequeue an element from the queue
3. Display the queue
4. Exit
Enter your choice: 2
Dequeued 10 from the queue.

Queue Operations Menu:
1. Enqueue an element to the queue
2. Dequeue an element from the queue
3. Display the queue
4. Exit
Enter your choice: 3
Queue elements: 20 

Queue Operations Menu:
1. Enqueue an element to the queue
2. Dequeue an element from the queue
3. Display the queue
4. Exit
Enter your choice: 4
Exiting the program.
