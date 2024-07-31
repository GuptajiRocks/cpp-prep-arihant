//
// Created by ariha on 31-07-2024.
//

#include <iostream>
using namespace std;

// Trying myself the decimal to binary convertor

void app1() {
    int a[50];
    int n;

    cout << "Enter the number to convert?:" << endl;
    cin >> n;
    int i = 0;
    while (n > 0) {
        a[i] = n%2;
        n = n/2;
        i++;
    }

    for (i = i-1; i>=0; i--) {
        cout << a[i];
    }
}

int main() {
    app1();
}