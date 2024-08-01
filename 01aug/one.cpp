//
// Created by ariha on 01-08-2024.
//

#include <iostream>
using namespace std;

// Trying the four pillars of object oriented programming

// class Dog {
// public:
//     string dogName;
//     int dogAge;
//     Dog(string name, int age) {
//         this->dogName = name;
//         this->dogAge = age;
//     }
//
// public:
//     void printName() {
//         cout << "The name of the dog is: " << dogName << endl;
//         cout << " The age of the dog is: " << dogAge << endl;
//     }
// };

/*
 * Tried constructor, parameterized with different data types
 * This pointer to point towards the variable name
 *
 * Future trying things is to create an arrayObject and store the objects in the arrya
 * and then using loops call the objects' respective function.
 **/
class billo {
public:
    string dogName;
    int dogAge;
    billo(string name, int age) {
        this->dogName = name;
        this->dogAge = age;
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

    billo b(name, age);
    b.printName();
}

void call_dog_2() {
    string name;
    int age;
    cout << "Enter the name of the dog: ";
    cin >> name;
    cout << endl;
    cout << "Enter the age of the dog: ";
    cin >> age;

    billo b(name, age);
    b.printName();

}

int main() {
    call_dog();
    call_dog_2();
}