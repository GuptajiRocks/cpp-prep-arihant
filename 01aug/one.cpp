//
// Created by ariha on 01-08-2024.
//

#include <iostream>
using namespace std;

// Trying the four pillars of object oriented programming

class Dog {
public:
    string dogName;
    int dogAge;
    Dog(string name, int age) {
        this->dogName = name;
        this->dogName = age;
    }

public:
    void printName() {
        cout << "The name of the dog is: " << dogName << endl;
        cout << " The age of the dog is: " << dogAge << endl;
    }
};

void call_dog() {
    string name;
    int age;
    cout << "Enter the name of the dog: ";
    cin >> name;
    cout << endl;
    cout << "Enter the age of the dog: ";
    cin >> age;

    Dog dog(name, age);
    dog.printName();
}

int main() {
    call_dog();
}