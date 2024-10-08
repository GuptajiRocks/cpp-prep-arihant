//
// Created by ariha on 09-09-2024.
//
#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Print the top element
    cout << "Top element: " << myStack.top() << endl;

    // Pop elements from the stack
    myStack.pop();
    myStack.pop();

    // Check if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Push another element
    myStack.push(40);

    // Print the size of the stack
    cout << "Size of the stack: " << myStack.size() << endl;

    return 0;
}
