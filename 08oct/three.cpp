//
// Created by ariha on 08-10-2024.
//

#include <bits/stdc++.h>
using namespace std;

class A {
private:
    int a;
public:
    A() {
        a = 0;
    }
    friend class B;
};

class B {
private:
    int b;
public:
    void showA(A &x) {
        cout << """""A::a = """"" << x.a;
    }
};

// int binarySearch(int arr[], )
int main() {
    A a;
    B b;
    b.showA(a);

    return 0;

}
