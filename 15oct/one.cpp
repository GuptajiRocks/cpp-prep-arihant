//
// Created by ariha on 15-10-2024.
//
#include <bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* next;


};

void postfixeval() {
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



