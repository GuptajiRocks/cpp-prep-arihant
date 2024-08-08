//
// Created by ariha on 08-08-2024.
//

#include <iostream>
using namespace std;

void sl() {
    int a[] = {1,3,5,19,10};

    int sm = a[0];
    int la = a[0];

    for (int i = 1; i < size(a); i++) {
        if (a[i] > la) {
            la = a[i];
        }
        if (a[i] < sm) {
            sm = a[i];
        }
    }

    cout << sm << endl;
    cout << la << endl;
}

void ques2() {

}
// Linear search provides us with a target element

int main() {
    sl();
}