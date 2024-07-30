//
// Created by ariha on 30-07-2024.
//

// only writing comments because naya naya shauk hai
#include <iostream>
using namespace std;

class Dog {
    // We have defined the data members as public so that they will be accessible
public:
    string breed;
    int age;
    string color;
    string size;

    // printname function defined the printing of the data that will be stored in this
    void printname() {
        cout << "Breed is :" << breed << endl;
        cout << "Age is: " << age << endl;
        cout << "Color is: " << color << endl;
        cout << "Size is: " << size << endl;
    }
};
// main function begins
int main() {
    // object of Dog class has been created
    Dog dog;
    // feeding in the data in appropriate variables
    dog.breed = "Street dog";
    dog.age = 100;
    dog.color = "Black";
    dog.size = "Big ass dog";

    // now the data has been fed, we will call the function we created to print every data

    dog.printname();
    // sherr, now program has been executed.
    return 0;
}