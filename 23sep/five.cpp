//
// Created by ariha on 23-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    int sum = 0;
    int i = 1;
    while ((i*2) < 15) {
        sum = sum + (i*2);
        i++;
    }

    cout << sum << endl;
}
