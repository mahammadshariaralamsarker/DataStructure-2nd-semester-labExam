#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: 0! = 1 and 1! = 1
    }
    return n * factorial(n - 1);  // Recursive case: n! = n * (n-1)!
}

int main() {
    int num;

    // Input the number
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    // Check for negative numbers
    if (num < 0) {
        cout << "Factorial of a negative number is not defined." << endl;
    } else {
        // Calculate factorial using the recursive function
        int result = factorial(num);
        cout << "Factorial of " << num << " is: " << result << endl;
    }

    return 0;
}
// Enter a number to calculate its factorial: 5
// Factorial of 5 is: 120


