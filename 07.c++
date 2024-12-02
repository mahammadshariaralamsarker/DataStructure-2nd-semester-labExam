#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n * factorial(n - 1)
    return n * factorial(n - 1);
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        unsigned long long result = factorial(num);
        cout << "Factorial of " << num << " is " << result << "." << endl;
    }

    return 0;
}
Enter a positive integer: 5
Factorial of 5 is 120.
