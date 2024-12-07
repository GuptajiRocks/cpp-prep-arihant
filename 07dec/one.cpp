//
// Created by ariha on 07-12-2024.
//

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node() {
        next = nullptr;
    }

    Node(int c) {
        data = c;
        next = nullptr;
    }
};

int main() {
    cout << "Enter the elements to be added in LL: ";
    int n;
    cin >> n;

    // cout << "Enter elements:";
    Node* head;
    Node* temp = head;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        int tc;
        cin >> tc;
        temp->next = new Node(tc);
        temp = temp->next;
    }

    Node* trav = head;
    trav = trav->next;

    while (trav != nullptr) {
        cout << "Element: " << trav->data << " " << endl;
        trav = trav->next;
    }

    return 0;
}
