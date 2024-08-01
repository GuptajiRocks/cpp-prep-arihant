//
// Created by ariha on 01-08-2024.
//

#include <iostream>
using namespace std;
// Trying to build the logic for calculation power when base and exponent is provided.

// void power_base_trial() {
//     int b,e;
//     cout << "Enter the base: ";
//     cin >> b;
//     cout << endl << "Enter the exponent";
//     cin >> e;
//     cout << endl;
//     int res = 1;
//
//     for (int i = 0; i<e; i++) {
//         res = res*b;
//     }
//
//     cout << res;
// }

int power_calc(int base, int exponent) {
    cout << "Provided base is: " << base << endl;
    cout << "Provided exponent is: " << exponent << endl;

    int res = 1;

    for (int i = 0; i<exponent; i++) {
        res = res * base;
    }
    return res;
}

int main() {
    // power_base_trial();

    int b,e;
    cout << "Enter the base: ";
    cin >> b; cout << endl;
    cout << "Enter the exponent";
    cin >> e; cout << endl;

    int result = power_calc(b,e);
    cout << "The result is: " << result;
}