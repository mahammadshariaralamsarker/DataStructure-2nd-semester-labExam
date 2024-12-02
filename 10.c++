#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function to find the pivot position
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as the pivot
    int i = low - 1;        // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {  // If the current element is smaller than the pivot
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Swap the pivot element with the element at index (i+1)
    swap(arr[i + 1], arr[high]);
    return (i + 1);  // Return the partitioning index
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Get the partition index

        // Recursively sort elements before and after the partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Perform Quick Sort
    quickSort(arr, 0, n - 1);

    // Display the sorted array
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
// Enter the size of the array: 6
// Enter 6 elements of the array: 10 7 8 9 1 5
// Sorted array: 1 5 7 8 9 10
