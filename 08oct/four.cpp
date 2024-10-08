//
// Created by ariha on 08-10-2024.
//

#include <bits/stdc++.h>
using namespace std;

// program for binary searching elements, it will return index at which element was found

int binarySearch(int arr[], int low, int high, int check) {
    // check is the element we need to search.

    while (low <= high) {
        int mid = (low + (high-low))/2;

        if (arr[mid] == check) {
            return mid;
        }

        if (arr[mid] < check) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }

    return -1;
}
int main() {
    int arr[] = {2,3,40,87,100};
    int high = 5;
    int check = 87;
    int low = 0;

    int ind = binarySearch(arr, low, high-1, check);

    if (ind == -1) {
        cout << "Element not found.." << endl;
    } else {
        cout << "Element found at index: " << ind << endl;
    }

    return 0;
}