//
// Created by ariha on 08-10-2024.
//

#include<bits/stdc++.h>
using namespace std;

// class Node {
// public:
//
// };
struct Node {
    int data;
    Node* next;

    Node(int c) {
        data = c;
        next = nullptr;
    }
};

int main() {

    Node* head = new Node(10);
    head->next = new Node(15);
    Node* temp = head;
    temp = temp->next;
    temp->next = new Node(20);

    Node* trav = head;

    while (trav!=nullptr) {
        cout << trav->data << " ";
        trav = trav->next;
    }

    return 0;
}



