//
// Created by ariha on 01-10-2024.
//

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    ~DoublyLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current->next;
            delete current;
            current = temp;
        }
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr) {
            head->prev = newNode;
        }
        head = newNode;

        if (tail == nullptr) {
            tail = newNode;
        }
    }

    void insertAtEnd(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->prev = tail;
        newNode->next = nullptr;

        if (tail != nullptr) {
            tail->next = newNode;
        }
        tail = newNode;

        if (head == nullptr) {
            head = newNode;
        }
    }

    void insertAfter(Node* prevNode, int data) {
        if (prevNode == nullptr) {
            return;
        }

        Node* newNode = new Node();
        newNode->data = data;
        newNode->prev = prevNode;
        newNode->next = prevNode->next;

        if (prevNode->next != nullptr) {
            prevNode->next->prev = newNode;
        }
        prevNode->next = newNode;

        if (prevNode == tail) {
            tail = newNode;
        }
    }

    void deleteNode(Node* node) {
        if (node == nullptr || head == nullptr) {
            return;
        }

        if (node == head) {
            head = head->next;
        } else {
            node->prev->next = node->next;
        }

        if (node == tail) {
            tail = tail->prev;
        } else {
            node->next->prev = node->prev;
        }

        delete node;
    }

    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

public:
    Node* head;
    Node* tail;
};

int main() {
    DoublyLinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(30);
    list.insertAfter(list.head->next, 40);

    list.printList();

    Node* nodeToDelete = list.head->next->next;
    list.deleteNode(nodeToDelete);

    list.printList();

    return 0;
}