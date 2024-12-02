#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    if (n <= 0) {
        cout << "Number of terms must be greater than 0." << endl;
        return;
    }

    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << first << " ";
        } else if (i == 1) {
            cout << second << " ";
        } else {
            next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
    }
    cout << endl;
}

int main() {
    int n;

    // Input the number of Fibonacci terms to display
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;

    // Generate the Fibonacci series
    generateFibonacci(n);

    return 0;
}
// Enter the number of Fibonacci terms: 10
// Fibonacci Series: 0 1 1 2 3 5 8 13 21 34
