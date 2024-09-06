//
// Created by ariha on 06-09-2024.
//

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

int main() {
    Node* head = new Node(5);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(7);

    Node* current = head;
    int co = 0;
    while (current != nullptr) {
        co++;
        cout << current->data << " ";
        current = current->next;
    }

    cout << co;
}


