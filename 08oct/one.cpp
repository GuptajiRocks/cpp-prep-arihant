//
// Created by ariha on 08-10-2024.
//

#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int ch, int len) {
    //int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++) {
        if (arr[i] == ch) {
            return true;
        } else {
            continue;
        }
    }
    return false;
}

int main() {
    int arr[] = {89,23,1,34,5};
    bool res = linearSearch(arr, 1, 5);
    if (res) {
        cout << "Element found!";
    } else {
        cout << "Element not found";
    }

    return 0;
}