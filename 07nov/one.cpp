//
// Created by ariha on 07-11-2024.
//
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int c) {
        data = c;
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

    void inOrder() {
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
        cout << node->data;
        inOrderTraversal(node->right);
    }
};

int main() {
    BinarySearchTree bst;
    int n;
    cout << "Enter the limit of the numbers you wish to enter: ";
    cin >> n;
    int tc;

    for (int i = 0; i < n; i++) {
        cin >> tc;
        bst.insert(tc);
    }

    bst.inOrder();

}
