//
// Created by ariha on 27-08-2024.
//

#include <iostream>
using namespace std;

int fun() {
    static int num = 7;
    return num--;
}

int main() {
    for(fun();fun();fun()) {
        cout << fun();
    }

    return 0;
}
