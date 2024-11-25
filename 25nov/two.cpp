//
// Created by ariha on 25-11-2024.
//

#include <bits/stdc++.h>
using namespace std;

// trying to build heap and do shit lol

void call_min_heap() {
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
}

void call_max_heap() {
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(15);
    maxHeap.push(2);

    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;
}

int main() {
    call_max_heap();
    return 0;
}