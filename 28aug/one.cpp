//
// Created by ariha on 28-08-2024.
//

#include <iostream>
using namespace std;

void insort(int arr[], int n) {
    int pass = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j-1;
            pass += 1;
        }
        arr[j+1] = key;
    }

    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << pass << endl;
}

int main() {
    int arr[] = {2,10,23,12,1,90};
    insort(arr, 6);

}


