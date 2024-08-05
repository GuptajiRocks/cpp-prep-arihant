//
// Created by ariha on 05-08-2024.
//

#include <iostream>
using namespace std;

// my OG banking details object creating program

class banking {
public:
    banking() {

    }
private:
    int cid;
    string cname;
    int accbal;
public:
    banking(int customerid, string customername) {
        this->cid = customerid;
        this->cname = customername;

        cout << "Do you want to have account balance?: (Press Y/N)" << endl;
        string choice;
        cin >> choice;
        if (choice == "Y") {
            cout << "Enter initial account balance: " << endl;
            cin >> accbal;
        } else {
            accbal = 0;
        }
    }

    void display_balance() {
        cout << "Your account balance is: " << accbal << endl;
    }

    void deposit(int amt) {
        accbal = accbal + amt;
    }

    void withdraw(int amt) {
        cout << "The amount to withdraw is: " << amt << endl;
        string choice;
        cout << "To proceed press Y: ";
        cin >> choice;

        if (choice == "Y") {
            accbal = accbal - amt;
            cout << "Update balance is: " << accbal;
        }
    }

};

int main() {
    while (true) {
        cout << "Welcome to the program.." << endl;
        cout << "Press 1 to Create Object: " << endl;



    }
}
