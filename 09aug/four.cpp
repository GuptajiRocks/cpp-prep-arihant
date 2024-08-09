//
// Created by ariha on 09-08-2024.
//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void checkuni(int arr1[], int arr2[]) {
    set<int> s1;

    for (int i = 0; i < 6; i++) {
        s1.insert(arr1[i]);
    }

    for (int i = 0; i < 6; i++) {
        s1.insert(arr2[i]);
    }

    vector<int> vec(s1.begin(), s1.end());

    for (int i = 0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }

}

int main() {
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {3,4,5,8,9,10};

    checkuni(arr1, arr2);
}