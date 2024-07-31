//
// Created by ariha on 31-07-2024.
//

#include <iostream>
using namespace std;
// practical lab 31 jul online
void c1() {
    // printing characters in endline when entered in a sentence.
    char c[100];
    int i = 0;
    cin.getline(c,100);
    while (c[i] != '\0') {
        if (c[i] == ' ') {
            cout << endl;
        } else {
            cout << c[i];
        }
        i++;
    }
}

int main() {
    c1();
}
