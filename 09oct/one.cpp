//
// Created by ariha on 09-10-2024.
//

#include <bits/stdc++.h>
using namespace std;

 void q1(){
    // learning double pointer

    int a = 10;
    int *b = &a;
    int **c = &b;
    **c = 20;
    cout << a;
    //int ***d = &c;
}

int main() {
     queue<int> arr;
     stack<int> arr1;
     while(!arr.empty()) {
         cout << arr.front() << " ";
         arr.pop();
     }
 }