//
// Created by ariha on 06-11-2024.
//

#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int N, int i) {
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < N && arr[l] < arr[largest]) {
        largest = l;
    }

    if (r < N && arr[r] < arr[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
    }
}

void buildHeap(int arr[], int n) {
    int idx = (n-1)/2;
    for (int i = idx; i >= 0; i--) {
        heapify(arr, n, idx);
    }
}

int main() {
    int arr[] = {2, 12, 1, 7, 3, 14};
    buildHeap(arr, (sizeof(arr)/sizeof(arr[0])));
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}