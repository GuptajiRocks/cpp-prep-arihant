//
// Created by ariha on 06-08-2024.
//

#include <algorithm>
#include <iostream>

using namespace std;

// int trial(int arr[]) {
//     int len = sizeof(arr) / sizeof(arr[0]);
//
//     sort(arr, arr + len);
//
//     return arr[0];
// }

int main() {

    static int arr[] = {2,6,7,8,9,2,4,5,1,22};
    sort(arr, arr+size(arr));
    cout << arr[8];
}