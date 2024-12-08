//
// Created by ariha on 08-12-2024.
//

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int c) {
        data = c;
        next = nullptr;
    }
};

void c1() {
    // linked list element delete
}

void c2() {
    Node* head = nullptr;

    int n;
    cout << "Enter the elements you wish to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int tc;
        cin >> tc;
        Node* newNode = new Node(tc);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* jesus = head;
            while (jesus->next != nullptr) {
                jesus = jesus->next;
            }

            jesus->next = newNode;
        }
    }

    Node* trav = head;
    while (trav != nullptr) {
        cout << trav->data << " ";
        trav = trav->next;
    }

}
int main() {
    c2();

    return 0;
}