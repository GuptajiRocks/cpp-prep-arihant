//
// Created by ariha on 24-11-2024.
//

#include <bits/stdc++.h>
using namespace std;


void inb_sort() {
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

void miss_num() {
    int arr[] = {1,2,3,5};
    int n = 5;
    int len = sizeof(arr)/sizeof(arr[0]);

    int ts = (n*(n+1))/2;
    int c = 0;

    for (int i = 0; i < len ; i++) {
        c = c + arr[i];
    }

    if (c == ts) {
        cout << "No element is missing.";
    } else {
        cout << "The missing element is: " << (ts-c) << " .\n";
    }
}

int main() {
    miss_num();
}