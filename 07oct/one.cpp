//
// Created by ariha on 07-10-2024.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, *b, **c;
    a = 10;
    b = &a;
    c = &b;
    **c = 20;

    cout << "The value of a is: " << *b << endl;

    return 0;
}