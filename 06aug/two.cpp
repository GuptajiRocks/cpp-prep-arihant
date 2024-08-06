//
// Created by ariha on 06-08-2024.
//
#include <iostream>
using namespace std;

class Employee {
    int EID;
    string Ename;
    string Designation;
public:
    struct {
        int day,month,year;
    } DOB;

    struct {
        int day,month,year;
    } DOJ;

    int age = 2024 - DOB.year;
    float s1 = 1.1;

};

int main() {
    Employee e;
    e.DOB.day=32;
    cout << e.DOB.day;
    e.DOJ.month=2;

}

