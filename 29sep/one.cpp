//
// Created by ariha on 29-09-2024.
//

#include <bits/stdc++.h>
using namespace std;

class Jesus {
public:
    int data;
    Jesus* next;

    Jesus(int n) {
        data = n;
        next = nullptr;
    }
};

int main() {
    Jesus* head = new Jesus(5);
    Jesus* temp = head;
    int len; cout << "Enter the number of elements: "; cin >> len;
    int tc;
    for (int i = 0; i < len; i++) {
        cin >> tc;
        temp->next = new Jesus(tc);
        temp = temp->next;
    }

    Jesus* trav = head;

    while (trav!=nullptr) {
        cout << trav->data << " -> ";
        trav = trav->next;
    }
    cout << endl;
}