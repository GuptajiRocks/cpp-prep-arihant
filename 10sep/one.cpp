//
// Created by ariha on 10-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    string name;
    Node* next;
    Node(int val, string n) {
        data = val;
        next = nullptr;
        name = n;
    }
};

int main() {
    Node* head;
    int len;
    cin >> len;
    Node* temp = head;
    int i = 1;

    do {
        int td;
        string n;

    } while (i < len) {

    }

    // for (int i = 0; i < len; i++) {
    //     int data;
    //     cin >> data;
    //     string n;
    //     cin >> n;
    //
    //     temp->next = new Node(data, n);
    //     temp = temp->next;
    // }

    Node* trav = head;

    for (int i = 0; i < len; i++) {
        cout << trav->data << trav->name << endl;
        trav = trav->next;
    }
}
