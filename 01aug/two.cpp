//
// Created by ariha on 01-08-2024.
//

#include <iostream>
using namespace std;

// my OG banking details object creating program

class banking {
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






};
