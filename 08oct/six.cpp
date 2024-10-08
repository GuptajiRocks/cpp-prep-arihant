//
// Created by ariha on 08-10-2024.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to move disks between rods and print the steps
void moveDisks(int n, int from, int to) {
    cout << "Move disk " << n << " from tower " << from << " to tower " << to << endl;
}

// Recursive function for solving Tower of Hanoi with k towers
void solveHanoi(int n, int from, int to, int aux1, int aux2, int aux3) {
    if (n == 0) return;

    if (n == 1) {
        moveDisks(n, from, to);  // Base case: move the single disk
    } else {
        // Step 1: Move n-2 disks to auxiliary tower 1 (aux1)
        solveHanoi(n - 2, from, aux1, aux2, aux3, to);

        // Step 2: Move disk n-1 to auxiliary tower 2 (aux2)
        moveDisks(n - 1, from, aux2);

        // Step 3: Move disk n from source to destination tower (to)
        moveDisks(n, from, to);

        // Step 4: Move disk n-1 from aux2 to destination tower (to)
        moveDisks(n - 1, aux2, to);

        // Step 5: Move the n-2 disks from aux1 to destination (to)
        solveHanoi(n - 2, aux1, to, from, aux2, aux3);
    }
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    // Assume 5 towers where:
    // Tower 1 is the source (from)
    // Tower 2, 3, and 4 are auxiliary (aux1, aux2, aux3)
    // Tower 5 is the destination (to)

    solveHanoi(n, 1, 5, 2, 3, 4);  // Source: 1, Destination: 5, Auxiliary: 2, 3, 4

    return 0;
}
