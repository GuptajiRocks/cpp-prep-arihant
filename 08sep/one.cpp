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
    head->next->next = new Node(3);

    cout << head->next->next->data;



    //arr.push_back(head);

    
}