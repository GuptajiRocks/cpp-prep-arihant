//
// Created by ariha on 09-09-2024.
//

// Pass by reference sorting program practice.
#include<bits/stdc++.h>
using namespace std;

void sortr(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        bool swapp = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapp = true;
            }
        }

        if (!swapp) {
            break;
        }
    }
}
int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    sortr(arr, 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}