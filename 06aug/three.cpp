//
// Created by ariha on 06-08-2024.
//

#include <iostream>
using namespace std;

void s1() {
    string sher[5] = {"Arihant","Vishnu","Arastu","Vansh","Sarthak"};
    string* vor;
    vor = sher;

    for (int i=0; i<size(sher); i++) {
        cout << sher[i] << endl;
    }

}

int main() {
    s1();
}

