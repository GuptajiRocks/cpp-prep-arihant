#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};

int main() {
    vector<Node*> arr;
    Node* head = new Node(5);
    head->next = new Node(4);
    head->next->next = new Node(19);
    head->next->next->next = new Node(3);

    Node* newNode = new Node(10);
    newNode->next = head;
    head = newNode;

    Node* current = head;

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    //arr.push_back(head);

    
}