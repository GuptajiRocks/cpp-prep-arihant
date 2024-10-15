//
// Created by ariha on 15-10-2024.
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

void postfixevalone() {
    // 6 2 3 * / 3 4 * + 3 2 * -
    // Input Stack
    /* 6    6
     * 2    6 2
     * 3    6 2 3
     * *    6 6
     * /    1
     * 3    1 3
     * 4    1 3 4
     * *    1 12
     * +    13
     * 3    13 3
     * 2    13 3 2
     * *    13 6
     * -    7
     *
     * Final answer evaluation is 7.
     */
}

class Polynomial {
public:
    Node* head;
    Node* temp;

    void addHead(int first) {
        head = new Node(first);
        temp = head;
        temp = temp->next;
    }

    void addElem(int val) {
        temp->next = new Node(val);
        temp = temp->next;
    }

    void display() {
        Node* trav = head;
        while (trav!=nullptr) {
            cout << trav->data << " ";
            trav = trav->next;
        }
    }
};

// int main() {
//     Polynomial s1;
//     s1.addHead(10);
//     s1.addElem(12);
//
//     s1.display();
//
//     return 0;
// }


class Pol {
public:
    int coeff;
    int expo;
    Pol* next;

    Pol(int c, int e) {
        coeff = c;
        expo = e;
        next = nullptr;
    }
};

int main() {
    cout << "Polynomial 1: " << endl;
    int len;
    cout << "Enter highest power: "; cin >> len;
    int tc, te;
    int i = 0;
    cout << "Enter " << (i+1) << " coeff and expo of the polynomial: ";
    cin >> tc >> te;
    Pol* head1 = new Pol(tc, te);
    Pol* temp1 = head1;
    for (int j = i+1; j < len; j++) {
        cin >> tc >> te;
        temp1->next = new Pol(tc, te);
        temp1 = temp1->next;
    }

    cout << "Polyomial 1 added";

    return 0;

}



