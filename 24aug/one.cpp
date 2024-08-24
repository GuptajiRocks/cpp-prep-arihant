//
// Created by ariha on 24-08-2024.
//

#include<iostream>
using namespace std;

int sqe(int num) {
    int fin = 0;
    if (num == 1) {
        fin = 1;
    } else {
        for (int i = 0; i < (num/2); i++) {
            if (i*i == num) {
                return i;
            }
        }
    }

    return fin;
}
int main() {

    int res = sqe(4);
    cout << "The square root is: " << res << endl;

    return 0;

}
