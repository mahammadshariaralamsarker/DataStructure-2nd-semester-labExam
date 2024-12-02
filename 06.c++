#include <iostream>
using namespace std;

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: If only one disk, move it from source to destination
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary using destination as auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move n-1 disks from auxiliary to destination using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;

    // Input the number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    // Solve the Tower of Hanoi problem
    towerOfHanoi(n, 'A', 'C', 'B');  // A: source, C: destination, B: auxiliary

    return 0;
}
// Enter the number of disks: 3
// Move disk 1 from A to C
// Move disk 2 from A to B
// Move disk 1 from C to B
// Move disk 3 from A to C
// Move disk 1 from B to A
// Move disk 2 from B to C
// Move disk 1 from A to C
