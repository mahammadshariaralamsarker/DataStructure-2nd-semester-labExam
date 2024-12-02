#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base case: F(0) = 0, F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int n;

    // Input the number of Fibonacci terms to display
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";  // Call the recursive function
    }
    cout << endl;

    return 0;
}
// Enter the number of Fibonacci terms: 10
// Fibonacci Series: 0 1 1 2 3 5 8 13 21 34
