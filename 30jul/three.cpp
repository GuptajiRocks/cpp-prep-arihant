//
// Created by ariha on 30-07-2024.
//

#include <iostream>
using namespace std;

void c1() {
    // printf returns string length
    int x = printf("This is my first C++ program");
    cout << x << endl;
}

int display() {
    cout << "This is first C++ program";
    return 0;
}

void ques3() {
    int i = 19;
    char c = 'a';
    float f = 99.9;
    double d = 20.45;

    cout << sizeof(i) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(d) << endl;
}

void ques4() {
    int x,y,z;

    cout << "Enter price of smartphone 1: ";
    cin >> x;
    cout << endl;
    cout << "Enter price of smartphone 2: ";
    cin >> y;
    cout << endl;
    cout << "Enter price of smartphone 3: ";
    cin >> z;
    cout << endl;

    int res = min(min(x,y),z);

    cout << "The minimum price is: " << res << endl;

}
int main() {
    // c1();

    // ques3();

    ques4();

    return 0;
}