//
// Created by ariha on 21-08-2024.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<char> arr;

    for (int i = (s.length()-1); i >= 0; i++) {
        arr.push_back(s[i]);
    }
}