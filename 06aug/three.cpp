//
// Created by ariha on 06-08-2024.
//

#include <iostream>
#include <math.h>
using namespace std;

// void s1() {
//     string sher[5] = {"Arihant","Vishnu","Arastu","Vansh","Sarthak"};
//     string* vor;
//     vor = sher;
//
//     for (int i=0; i<size(sher); i++) {
//         cout << sher[i] << endl;
//     }
//
// }
//
// void s2() {
//     int var[] = {1,2,3,4,4,5,6};
//     cout << size(var);
// }

int armstrong(string x) {
    int j = stoi(x);
    int ep = size(x);
    double res = 0;
    while (j != 0) {
        res = res + (pow((j%10),ep));
        j = j/10;
    }
    if (res == stoi(x)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    string inp;
    cin >> inp;
    int res = armstrong(inp);
    if (res == 1) {
        cout << "Armstrong" << endl;
    } else {
        cout << "Not Armstrong" << endl;
    }
}

