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

struct Value {
    int x,y;
};

int main() {
    // checkerone();
    Value v1 = {1,2};
    Value* v2 = &v1;
    cout << v2->x << " " << v2->y << endl;
}
