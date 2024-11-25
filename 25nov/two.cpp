//
// Created by ariha on 25-11-2024.
//

#include <bits/stdc++.h>
using namespace std;

// trying to build heap and do shit lol

int main() {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(15);
    minHeap.push(2);

    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
    return 0;
}