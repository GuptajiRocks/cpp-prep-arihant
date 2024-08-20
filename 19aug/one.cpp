//
// Created by ariha on 19-08-2024.
//

#include <iostream>
#include <vector>
using namespace std;

// Program for bubble sort

void sortings(vector<int> arr) {
    int len = arr.size();
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

    for (int num : arr) {
        cout << num << " ";
    }
}

int main() {
    vector<int> arr = {17,19,22,1,0,45};

    sortings(arr);

}
