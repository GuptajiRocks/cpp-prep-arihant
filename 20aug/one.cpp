//
// Created by ariha on 20-08-2024.
//

// Function prototyping

#include <iostream>
#include <vector>
using namespace std;

void sitt(int &a, int &b) {
    cout << a+b;
}

void call_byadd(int* lauda, int* lauda1) {
    cout << (*lauda)-(*lauda1);
}

int main() {
    // Return by address and return by reference
    int a,b;
    cin >> a >> b;

    // sitt(a,b);

    call_byadd(&a, &b);




}
