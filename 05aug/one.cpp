//
// Created by ariha on 05-08-2024.
//

#include <iostream>
using namespace std;

// my OG banking details object creating program

class banking {
public:
    banking() {
        //
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
            cout << "Updated balance is: " << accbal << endl;
        }
    }

    void display_details() {
        cout << "Your name is: " << cname << endl;
        cout << "Your Phone Number is: " << cid << endl;
        cout << "Your current account balance stands at: " << accbal << endl;
    }

};

int main() {
    static int choice;
    static banking b[10];

    while(true) {
        cout << "Welcome to the program.." << endl;
        cout << "Press 1 to Create Account " << endl;
        cout << "Press 2 to Deposit" << endl;
        cout << "Press 3 to Withdraw" << endl;
        cout << "Press 4 to Display Just Balance" << endl;
        cout << "Press 5 to Display Whole Details" << endl;

        cin >> choice;

        if (choice == 1) {
            string customername;
            int custid;
            cout << "Enter name of customer: ";
            cin >> customername;
            cout << endl;
            cout << "Enter Phone Number: ";
            cin >> custid;
            cout << endl;

            b[0] = banking(custid, customername);

        } else if(choice == 2) {
            int amt;
            cout << "Enter amount to deposit: " << endl;
            cin >> amt;
            b[0].deposit(amt);
        } else if(choice == 3) {
            int amt;
            cout << "Enter amount to withdraw: " << endl;
            cin >> amt;
            b[0].withdraw(amt);
        } else if(choice == 4) {
            b[0].display_balance();
        } else if(choice == 5) {
            b[0].display_details();
        } else {
            break;
        }

    }
}
