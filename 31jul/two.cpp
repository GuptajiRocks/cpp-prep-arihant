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

// Since this goddamn language does not have a proper method to count the elements in array, if thought of implementing
// an existing trick

void array_len_counter() {
    int arr[10] = {100,200,300,400,500,600,700,800,900,1000};
    int x = sizeof(arr)/sizeof(arr[0]);
    int y = size(arr);
    cout << y << endl;
    cout << x << endl;

    // Turns out, there was a goddamn function named 'size'....LOL
}
int main() {
    // app1();

    array_len_counter();
}