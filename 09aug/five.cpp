//
// Created by ariha on 09-08-2024.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findUnion(int arr1[], int n1, int arr2[], int n2) {
    vector<int> unionArray;


    for (int i = 0; i < n1; ++i) {
        unionArray.push_back(arr1[i]);
    }
    for (int i = 0; i < n2; ++i) {
        unionArray.push_back(arr2[i]);
    }


    sort(unionArray.begin(), unionArray.end());


    int i = 0;
    for (int j = 1; j < unionArray.size(); ++j) {
        if (unionArray[i] != unionArray[j]) {
            i++;
            unionArray[i] = unionArray[j];
        }
    }

    unionArray.resize(i + 1);

    return unionArray;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {3, 4, 5, 6, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> unionArray = findUnion(arr1, n1, arr2, n2);

    cout << "Union of the arrays: ";
    for (int num : unionArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



