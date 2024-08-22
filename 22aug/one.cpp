//
// Created by ariha on 22-08-2024.
//

// Golden ratio and fibonacci series
#include <iostream>
using namespace std;

void fact(int n) {
    float res = 1;
    while (n != 1) {
        res = res * (n);
        n = n-1;
    }
    cout << res;

}

int main() {
    int n;
    cin >> n;
    fact(n);

}