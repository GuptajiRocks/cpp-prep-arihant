//
// Created by ariha on 24-08-2024.
//

#include<iostream>
using namespace std;

int sqe(int num) {
    if (num == 1) {
        return 1;
    } else {
        for (int i = 1; i <= (num/2); i++) {
            if (i*i == num) {
                return i;
            }
        }
    }
    return 0;
}
int main() {
    int num;
    cout << "Enter the number you wish to generate square root of:" << " ";
    cin >> num;

    int res = sqe(num);

    cout << "The square root is: " << res << endl;

    return 0;
}
