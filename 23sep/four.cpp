//
// Created by ariha on 23-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

// LinkedList via pointer implementation

class Node {
public:
    int data;
    Node* next;

    Node(int c) {
        data = c;
        next = nullptr;
    }
};

void insertTerm(Node* a, int c) {
    a->next = new Node(c);
    a = a->next;
}

int main() {
    Node* head = new Node(0);

    Node* temp = head;
    int tc;

    for (int i = 0; i < 3; i++) {
        cin >> tc;
        insertTerm(temp, tc);
    }

    Node* jesus = head;

    while (jesus != nullptr) {
        
    }

}