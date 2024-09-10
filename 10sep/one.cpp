//
// Created by ariha on 10-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

int main() {
    Node* head = new Node(5);
    int len;
    cin >> len;
    Node* temp = head;

    for (int i = 0; i < len-1; i++) {
        int data;
        cin >> data;
        temp->next = new Node(data);
        temp = temp->next;
    }

    Node* trav = head;

    for (int i = 0; i < len; i++) {
        cout << trav->data << endl;
        trav = trav->next;
    }
}
