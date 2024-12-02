#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index if the element is found
        }
    }
    return -1;  // Return -1 if the element is not found
}

int main() {
    int n, key;

    // Input array size
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search
    cout << "Enter the element to search: ";
    cin >> key;

    // Perform linear search
    int result = linearSearch(arr, n, key);

    // Display result
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}


// Enter the size of the array: 5
// Enter 5 elements of the array: 10 20 30 40 50
// Enter the element to search: 30
// Element found at index 2
