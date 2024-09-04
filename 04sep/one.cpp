//
// Created by ariha on 04-09-2024.
//


#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data) {
        data = data;
        next = nullptr;
    }
};


int main() {
    Node* ptr = new Node(5);
    ptr->next = new Node(4);
    ptr->next->next = new Node(10);


}


