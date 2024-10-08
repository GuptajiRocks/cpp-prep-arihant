//
// Created by ariha on 08-10-2024.
//

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        int key = arr[i];
        int j = i-1;

        while (j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void bubbleSort(int arr[], int len) {
    bool swapp = false;
    for (int i = 0; i < len-1; i++) {
        for (int j = 0; j < len-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapp = true;
            }
        }

        if (!swapp) {
            break;
        }
    }
}

void selectionSort(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        int min_idx = i;

        for (int j = i+1; j < len; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }
}

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid-left+1;
    int n2 = right-mid;

    int L[n1];
    int R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;


    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}


int main() {
    //int arr[] = {23,1,90,0,11};
    int arr[] = {90,95,80,85,0};
    //selectionSort(arr, 5);
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
