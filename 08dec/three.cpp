//
// Created by ariha on 08-12-2024.
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


int main() {
    float temp = 12.3;
    float *jesus = &temp;
    cout << &temp << endl;
    cout << jesus << endl;
    return 0;
}