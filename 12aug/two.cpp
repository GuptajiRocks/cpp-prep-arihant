//
// Created by ariha on 12-08-2024.
//

#include <iostream>
using namespace std;
class Parent {
public:
    void hummus() {
        cout << "This is parent class Hummus" << endl;
    }
};

class Child : Parent {
public:
    void hummus() {
        cout << "This is child class hummus" << endl;
    }
};

int main() {
    Child c1;
    c1.hummus();
}