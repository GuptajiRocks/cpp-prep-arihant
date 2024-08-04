//
// Created by ariha on 01-08-2024.
//

#include <iostream>
using namespace std;

// my OG banking details object creating program

class banking {
private:
    int n = 5;
public:
    void printN() {
        cout << n << endl;
    }
};


int main() {
    banking b;
    b.printN();
}