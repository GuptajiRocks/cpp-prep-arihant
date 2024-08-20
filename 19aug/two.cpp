//
// Created by ariha on 20-08-2024.
//

#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    vector<int> arr = {1,2,3,4};
    int n = arr.size();

    cout << "Unsorted array: \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    bubbleSort(arr);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
