//
// Created by ariha on 09-08-2024.
//

#include <iostream>
using namespace std;

// Trying recursion

int fact_calc(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact_calc(n-1);
    }
}

int main() {
    cout << "Enter number to calculate factorial: " << endl;
    int to_calc;
    cin >> to_calc;

    int res = fact_calc(to_calc);
    cout << "The factorial of " << to_calc << " is-> " << res;

    return 0;
}
