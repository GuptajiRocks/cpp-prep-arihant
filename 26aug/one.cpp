//
// Created by ariha on 25-08-2024.
//

#include <iostream>
using namespace std;

int main() {
    int num = 9;
    int *p = &num;
    int new_Val = *p;
    cout << new_Val << endl;
}