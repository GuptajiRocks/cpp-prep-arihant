//
// Created by ariha on 17-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int coeff;
    int expo;
    Node* next;

    Node() {
        coeff = 0;
        expo = 0;
        next = nullptr;
    }

    Node(int c, int e) {
        coeff = c;
        expo = e;
        next = nullptr;
    }
};

int main() {
    int len;
    cin >> len;

    int tc, te;
    cin >> tc >> te;

    Node* head = new Node(tc, te);
    Node* temp = head;

    for (int i = 1; i < len; i++) {
        cin >> tc >> te;
        temp->next = new Node(tc, te);
        temp = temp->next;
    }

    Node* trav = head;

    while (trav != nullptr) {
        cout << trav->coeff << "x^" << trav->expo << " ";
        trav = trav->next;
    }








}
