//
// Created by ariha on 11-12-2024.
//
#include <bits/stdc++.h>
using namespace std;

struct gawk {
    int num;
    gawk(int n) {
        num = n;
    }

    void gawk_gawk() {
        cout << "Gawk Gawk " << num << endl;
    }
};

int main() {
    int n;
    cout << "Gawk gawk level: ";
    cin >> n;

    gawk gawk1(n);
    gawk1.gawk_gawk();
}