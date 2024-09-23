//
// Created by ariha on 23-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

class Queueimplement {
public:
    queue<int> arr;

    void insertElement(int c) {
        arr.push(c);
    }

    void displayelement() {
        queue<int> tempq = arr;
        while (!tempq.empty()) {
            cout << tempq.front() << " ";
            tempq.pop();
        }
    }

    void dispfront() {
        cout << arr.front() << " " << endl;
    }
};

int main() {
    Queueimplement q1;

    int len;
    cout << "How many elements do you wish to insert?: ";
    cin >> len;
    int tc;

    for (int i = 0; i < len; i++) {
        cin >> tc;
        q1.insertElement(tc);
    }

    q1.displayelement();
}