//
// Created by ariha on 26-08-2024.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    stringstream ss(sentence);
    string word;
    while (ss >> word) {
        cout << word << endl;

    }

    return 0;
}


