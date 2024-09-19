//
// Created by ariha on 19-09-2024.
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

    int co = 0;

    Node* trav = head;
    while (trav!=nullptr) {
        if (co == len-1) {
            cout << trav->coeff << "x^" << trav->expo;
        } else {
            cout << trav->coeff << "x^" << trav->expo << " + ";
        }
        trav = trav->next;
        co++;
    }
    cout << endl;

    delete[] trav;
    Node* eval = head;

    while (eval != nullptr) {
        eval->coeff = eval->coeff * eval->expo;
        eval->expo = eval->expo - 1;

        eval = eval->next;
    }

    delete[] eval;

    Node* trav1 = head;

    while (trav1 != nullptr) {
        cout << trav1->coeff << "x^" << trav1->expo << " ";
        trav1 = trav1->next;
    }

    cout << endl;

}