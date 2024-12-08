//
// Created by ariha on 07-12-2024.
//

#include <bits/stdc++.h>
using namespace std;

// trying to build a program to delete element from the middle

struct Node {
    int data;
    Node* next;

    Node(int c) {
        data = c;
        next = nullptr;
    }

    Node() {
        next = nullptr;
    }
};

// class LinkedList {
//     Node* head;
// public:
//     LinkedList() {
//         head = nullptr;
//     }
//
//     void insert(int c) {
//         Node*
//     }
//
//
// };

void c1() {
    // trying from array
    int n;
    cout << "How many elements do you wish to enter?: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int chc;
    cout << "Enter the element you wish to be deleted: ";
    cin >> chc;
    int co = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == chc) {
            co = i;
            break;
        }
    }

    for (int i = co; i < n; i++) {
        arr[i] = arr[i+1];
    }

    cout << "Updated List: ";

    for (int i = 0; i < n-1; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    c1();
}