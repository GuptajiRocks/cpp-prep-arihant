//
// Created by ariha on 20-08-2024.
//

#include <iostream>
using namespace std;
void checkerone() {
    int num = 30;
    int *p;
    p = &num;
    cout << &num << endl;
    cout << p << endl;
    cout << *p << endl;
}
int main() {
    checkerone();
}
