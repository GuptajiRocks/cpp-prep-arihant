//
// Created by ariha on 18-08-2024.
//

#include <iostream>
using namespace std;

// Practicing element deletion

int main() {
    int arr[] = {1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    // for (int i = 0; i < len; i++) {
    //     cout << arr[i];
    // }

    int in;
    cout << "Enter the element you wish to be deleted: ";
    cin >> in;

    for (int i = in; i < len; i++) {
        arr[i] = arr[i+1];
    }

    for (int i = 0; i < len-1; i++) {
        cout << arr[i] << " ";
    }


}