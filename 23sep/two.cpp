//
// Created by ariha on 23-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int v) {
        data = v;
        next = nullptr;
    }
};

int main() {
    cout << "Enter first element: ";
    int tc;
    cin >> tc;

    Node* head = new Node(tc);
    Node* temp = head;

    for (int i = 0; i < 5; i++) {
        cin >> tc;
        temp->next = new Node(tc);
        temp = temp->next;
    }

    Node* trav = head;

    while (trav != nullptr) {
        cout << trav->data << " ";
        trav = trav->next;
    }

    cout << endl;


}