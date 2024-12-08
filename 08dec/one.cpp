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

    Node() {

    }
};

void c1() {
    // linked list element delete
}

void eleDel(Node* head, int c) {
    Node* trav = head;

    // Node* tempdel;
    // Node* prev;
    // while (trav != nullptr) {
    //     if (trav->data == c) {
    //         tempdel = trav;
    //         break;
    //     }
    //     trav = trav->next;
    // }

    // first trying to add element at the last

    while (trav->next != nullptr) {
        trav = trav->next;
    }

    trav->next = new Node(c);
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

    eleDel(head, 5);

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