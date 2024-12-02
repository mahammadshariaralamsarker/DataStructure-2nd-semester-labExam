#include <iostream>
using namespace std;

// Function to display the array
void displayArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a given position
void insertElement(int arr[], int& n, int element, int position) {
    // Shift elements to the right to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;  // Insert the new element at the specified position
    n++;  // Increase the size of the array
}

// Function to delete an element from a given position
void deleteElement(int arr[], int& n, int position) {
    // Shift elements to the left to fill the gap created by the deletion
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;  // Decrease the size of the array
}

int main() {
    int arr[100], n, choice, element, position;

    // Input the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input the elements of the array
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Menu-driven program to perform operations
    do {
        cout << "\nArray Operations Menu:\n";
        cout << "1. Insert an element\n";
        cout << "2. Delete an element\n";
        cout << "3. Display the array\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter the position (0 to " << n << ") to insert the element: ";
                cin >> position;

                // Check for valid position
                if (position < 0 || position > n) {
                    cout << "Invalid position!\n";
                } else {
                    insertElement(arr, n, element, position);
                    cout << "Element inserted successfully.\n";
                }
                break;

            case 2:
                cout << "Enter the position (0 to " << n - 1 << ") to delete the element: ";
                cin >> position;

                // Check for valid position
                if (position < 0 || position >= n) {
                    cout << "Invalid position!\n";
                } else {
                    deleteElement(arr, n, position);
                    cout << "Element deleted successfully.\n";
                }
                break;

            case 3:
                displayArray(arr, n);
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
// Enter the number of elements in the array: 5
// Enter 5 elements of the array: 10 20 30 40 50

// Array Operations Menu:
// 1. Insert an element
// 2. Delete an element
// 3. Display the array
// 4. Exit
// Enter your choice: 1
// Enter the element to insert: 25
// Enter the position (0 to 5) to insert the element: 2
// Element inserted successfully.

// Array Operations Menu:
// 1. Insert an element
// 2. Delete an element
// 3. Display the array
// 4. Exit
// Enter your choice: 3
// Array elements: 10 20 25 30 40 50

// Array Operations Menu:
// 1. Insert an element
// 2. Delete an element
// 3. Display the array
// 4. Exit
// Enter your choice: 2
// Enter the position (0 to 5) to delete the element: 3
// Element deleted successfully.

// Array Operations Menu:
// 1. Insert an element
// 2. Delete an element
// 3. Display the array
// 4. Exit
// Enter your choice: 3
// Array elements: 10 20 25 40 50

// Array Operations Menu:
// 1. Insert an element
// 2. Delete an element
// 3. Display the array
// 4. Exit
// Enter your choice: 4
// Exiting the program.
