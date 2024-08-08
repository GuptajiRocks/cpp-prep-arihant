//
// Created by ariha on 07-08-2024.
//
// #include <iostream>
// using namespace std;

#include <iostream>

using namespace std;

int removeDuplicates(int nums[], int n) {
    if (n == 0) return 0;

    int i = 0;
    for (int j = 1; j < n; j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeDuplicates(nums, n);

    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}


