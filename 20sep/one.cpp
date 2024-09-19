//
// Created by ariha on 20-09-2024.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> opt;
    int len;
    cin >> len;

    int arr[len];
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < len; i++) {
        if (i%2 != 0) {
            sum = sum - arr[i];
        } else {
            sum = sum + arr[i];
        }
    }

    cout << sum << endl;
}
