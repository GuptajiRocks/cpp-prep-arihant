//
// Created by ariha on 24-10-2024.
//

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = nullptr;
    }
};

class BinarySearchTree {
public:
    TreeNode* root;
    BinarySearchTree() {
        root = nullptr;
    }

    void insert(int val) {
        root = insertRec(root, val);
    }

    void inorder() {
        inOrderTraversal(root);
        cout << endl;
    }

private:
    TreeNode* insertRec(TreeNode* node, int val) {
        if (node == nullptr) {
            return new TreeNode(val);
        }

        if (val < node->data) {
            node->left = insertRec(node->left, val);
        } else {
            node->right = insertRec(node->right, val);
        }

        return node;
    }

    void inOrderTraversal(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        inOrderTraversal(node->left);
        cout << node->data << " ";
        inOrderTraversal(node->right);
    }
};

void jesus() {
    BinarySearchTree bst1;
    BinarySearchTree bst2;

    cout << "Enter the elements to be inserted: ";
    int len;
    cin >> len;
    
}