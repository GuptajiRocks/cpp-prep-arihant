//
// Created by ariha on 24-11-2024.
//

#include <bits/stdc++.h>
using namespace std;


int main() {
    int len;
    cout << "Enter the number of elements you wish to enter: ";
    cin >> len;
    int arr[len];

    cout << "Enter the elements please: \n";
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    cout << "After insertion array: ";
    for (int w : arr) {
        cout << w << " ";
    }
    cout << endl;

    sort(arr, arr+len);

    cout << "After sorrting array: ";

    for (int w : arr) {
        cout << w << " ";
    }
    cout << endl;

}