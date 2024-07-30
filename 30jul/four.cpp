//
// Created by ariha on 30-07-2024.
//

#include <iostream>
using namespace std;

void try1() {
    int arr[10];
    for (int i = 0; i < 5 ; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < 5; j++) {
        cout << arr[j];
    }
}

int main() {
    try1();

    return 0;
}
