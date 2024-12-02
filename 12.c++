#include <iostream>
using namespace std;

void insertElement(int arr[], int& n, int element, int position) {
    for (int i = n; i > position; i--) arr[i] = arr[i - 1];
    arr[position] = element;
    n++;
}

void deleteElement(int arr[], int& n, int position) {
    for (int i = position; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100], n, choice, element, position;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    do {
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> element >> position;
                if (position < 0 || position > n) cout << "Invalid position\n";
                else insertElement(arr, n, element, position);
                break;
            case 2:
                cin >> position;
                if (position < 0 || position >= n) cout << "Invalid position\n";
                else deleteElement(arr, n, position);
                break;
            case 3:
                displayArray(arr, n);
                break;
        }
    } while (choice != 4);
    return 0;
}
5
10 20 30 40 50
1 25 2
3
10 20 25 30 40 50
2 3
3
10 20 25 40 50
4
