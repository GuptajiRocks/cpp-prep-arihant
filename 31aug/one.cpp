//
// Created by ariha on 31-08-2024.
//

#include <bits/stdc++.h>
using namespace std;

struct employee {
    string name;
    int salary;
};

void bubsort(employee arr[], int n) {
    bool swapp = false;

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j].salary < arr[j+1].salary) {
                swap(arr[j], arr[j+1]);
                swapp = true;
            }
        }

        if (!swapp) {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout <<"Name: " << arr[i].name << ", Salary: " << arr[i].salary << endl;
    }
}

int main() {
    int n;
    cin >> n;

    employee arr[n];

    for (int i = 0; i < n; i++) {
        string tempn;
        int temsal;
        cin >> tempn;
        cin >> temsal;
        arr[i].name = tempn;
        arr[i].salary = temsal;
    }
    bubsort(arr, n);
}