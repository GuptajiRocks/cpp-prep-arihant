//
// Created by ariha on 19-08-2024.
//

#include <iostream>
using namespace std;

// Program for bubble sort

void sorting(int arr[]) {
    int len = sizeof(arr)/sizeof(arr[0]);
    bool swapp;

    for (int i = 0; i<len-1; i++) {
        swapp = false;

        for (int j = 0; j < len-1; j++) {
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

}
