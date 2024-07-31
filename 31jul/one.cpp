//
// Created by ariha on 31-07-2024.
//

/*
 * How I write code is, I write problem answers in seprated functions and then call these functions
 * in the main function, so as to I don't have to write code in main class again and again.
 *
 * Helps in maintaining records as well.
 * */

#include <iostream>
using namespace std;
// practical lab 31 jul online
void c1() {
    // printing characters in endline when entered in a sentence.
    char c[100];
    int i = 0;
    cin.getline(c,100);
    while (c[i] != '\0') {
        if (c[i] == ' ') {
            cout << endl;
        } else {
            cout << c[i];
        }
        i++;
    }
}

void q2() {
    //decimal to binary conversion

    int a[10];
    int n, i;

    cout << "Enter number to convert:";
    cin >> n;

    for (i = 0; n > 0; i++) {
        // since binary conversion, dividing by 2 and then restricting the value of n by dividing by 2
        a[i] = n%2;
        n = n/2;
    }

    cout << "Binary of given number is: ";

    for(i = i-1; i>=0; i--) {
        // now since doing binary conversion, we need to print the calculated result in reverse order
        // so indexing beginning from last
        cout << a[i];
    }
}

int main() {
    q2();
}
