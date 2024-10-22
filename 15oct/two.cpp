//
// Created by ariha on 15-10-2024.
//

#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinarySearchTree {
public:
    Node* root;

    BinarySearchTree() {
        root = nullptr;
    }

    void insert(int value) {
        root = insertHelper(root, value);
    }

    Node* insertHelper(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }

        if (value < node->data) {
            node->left = insertHelper(node->left, value);
        } else if (value > node->data) {
            node->right = insertHelper(node->right, value);
        }

        return node;
    }

    void inorderTraversal(Node* node) {
        if (node == nullptr) {
            return;
        }

        inorderTraversal(node->left);
        std::cout << node->data << " ";
        inorderTraversal(node->right);
    }

    void deleteNode(int value) {
        root = deleteHelper(root, value);
    }

    Node* deleteHelper(Node* node, int value) {
        if (node == nullptr) {
            return node;
        }

        if (value < node->data) {
            node->left = deleteHelper(node->left, value);
        } else if (value > node->data) {
            node->right = deleteHelper(node->right, value);
        } else {
            if (node->left == nullptr) {
                return node->right;
            } else if (node->right == nullptr) {
                return node->left;
            }

            Node* temp = node->right;
            while (temp->left != nullptr) {
                temp = temp->left;
            }

            node->data = temp->data;
            node->right = deleteHelper(node->right, temp->data);
        }

        return node;
    }
};

int main() {
    BinarySearchTree bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    std::cout << "Inorder traversal: ";
    bst.inorderTraversal(bst.root);
    std::cout << std::endl;

    bst.deleteNode(30);

    std::cout << "Inorder traversal after deletion: ";
    bst.inorderTraversal(bst.root);
    std::cout << std::endl;

    return 0;
}