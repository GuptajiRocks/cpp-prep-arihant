#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11, 90};
    int n = size(arr);

    sort(arr, arr + n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
