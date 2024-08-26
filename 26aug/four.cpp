//
// Created by ariha on 26-08-2024.
//

// Program implementing bubble sort

#include <bits/stdc++.h>
using namespace std;

void bubsort(int arr[], int len) {
    bool swapp;
    for (int i = 0; i < len-1; i++) {
        swapp = false;
        for (int j = 0; j < len -1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapp = true;
            }
        }
        if (!swapp) {
            break;
        }
    }
    cout << "[";
    for (int k = 0; k < len; k++) {
        cout << arr[k];
        if (k < len-1) {
            cout << ",";
        }
    }
    cout << "]";
    cout << endl;

}

int main() {
    int arr[] = {2,0,2,1,1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubsort(arr, len);
    return 0;
}