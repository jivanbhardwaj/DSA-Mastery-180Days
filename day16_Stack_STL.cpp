#include <bits/stdc++.h>
using namespace std;
/*  
* Stack → LIFO (Last In First Out) data structure.
* Operations:
* 1- push: Add an element to the top.
* 2- pop: Remove the top element.
* 3- top: Get the top element.
* 4- isEmpty: Check if the stack is empty.
*/
void explainStack() {
    stack<int> st; // Declaration of a stack of integers.
    st.push(10); // Adding elements to the stack.
    st.push(20);
    st.push(30);

    while (!st.empty()) {
        cout << st.top() << " "; // Printing the top element.
        st.pop(); // Removing the top element.
    }
}

int main() {
    explainStack();
    return 0;
}