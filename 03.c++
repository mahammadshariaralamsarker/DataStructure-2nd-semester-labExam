#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;
        }

        // If key is greater, ignore the left half
        if (arr[mid] < key) {
            left = mid + 1;
        }
        // If key is smaller, ignore the right half
        else {
            right = mid - 1;
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

    // Input sorted array elements
    cout << "Enter " << n << " elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to search
    cout << "Enter the element to search: ";
    cin >> key;

    // Perform binary search
    int result = binarySearch(arr, 0, n - 1, key);

    // Display result
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
// Enter the size of the array: 5
// Enter 5 elements of the sorted array: 10 20 30 40 50
// Enter the element to search: 30
// Element found at index 2
