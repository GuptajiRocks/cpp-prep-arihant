//
// Created by ariha on 13-09-2024.
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
    int len;
    cin >> len;

    int td;
    cin >> td;
    Node* head = new Node(td);
    Node* temp = head;

    for (int i = 1; i < len; i++) {
        cin >> td;
        temp->next = new Node(td);
        temp = temp->next;
    }

    Node* trav = head;

    for (int i = 0; i < len; i++) {
        cout << trav->data << " -> ";
        trav = trav->next;
    }

    cout << "NULL" << endl;

    delete [] head;
    delete [] trav;
}
