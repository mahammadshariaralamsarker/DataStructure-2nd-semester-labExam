#include <iostream>
#include <limits.h>
using namespace std;

void findSmallestAndLargest(int arr[], int n) {
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }

        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest  << endl;
}

int main() {
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSmallestAndLargest(arr, n);

    return 0;
}