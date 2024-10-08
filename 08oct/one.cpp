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

int binarySearch(int arr[], int low, int high, int x)
{
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);


        return binarySearch(arr, mid + 1, high, x);
    }
    return -1;
}

int main() {
    // int len = 5;
    // int arr[] = {89,23,1,34,5};
    // int ch = 00;
    // bool res = linearSearch(arr, ch, len);
    // if (res) {
    //     cout << "Element found!";
    // } else {
    //     cout << "Element not found";
    // }

    return 0;
}