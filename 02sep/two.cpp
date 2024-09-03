//
// Created by ariha on 02-09-2024.
//

#include <bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
int main() {
    Node* head = new Node(5);
    head -> next = new Node(4);
    head -> next -> next = new Node(3);

    printList(head);

}