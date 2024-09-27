//
// Created by ariha on 27-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> arr;
    int len;
    cin >> len;
    int tc;
    int i = 0;

    do {
        //int tc;
        cin >>tc;
        arr.push(tc);
        i++;
    } while (i < len);

    while (!arr.empty()) {
        cout << arr.front() << " ";
        arr.pop();
    }
}