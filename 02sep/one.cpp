//
// Created by ariha on 02-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

// trying array pointer concept

void eledel(int arr[] , int n, int len) {
    for (int i = n; i < len-1; i++) {
        arr[i] = arr[i+1];
    }
}

void elevecdel(vector<int>& arr, int n, int len) {
    for (int i = n; i < len-1; i++) {
        arr[i] = arr[i+1];
    }

}

int main() {
    // int arr[] = {1,2,3,4};
    // int n = 2;
    // int len = 4;
    //
    // eledel(arr, n, len);

    vector<int> arr = {1,2,3,4,5};
    elevecdel(arr, 3, 5);

    for (int num : arr) {
        cout << num << " ";
    }



    
}