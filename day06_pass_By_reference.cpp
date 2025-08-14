/*
    This program demonstrates the concept of pass-by-reference in C++.

    - The function `Explaining_pass_by_reference` takes an integer reference as its parameter.
    - Inside the function, the value of the referenced integer is increased by 50.
    - In `main`, an integer variable `i` is initialized to 30.
    - The variable `i` is passed to the function by reference, so its value is modified directly.
    - After the function call, the updated value of `i` (which is now 80) is printed to the console.

    Key Concepts:
    - Pass-by-reference allows a function to modify the actual variable passed to it.
    - The `&` symbol in the function parameter indicates pass-by-reference.
*/
#include <bits/stdc++.h>
using namespace std;

void Explaining_pass_by_reference(int &x){
        x=x+50;
    }

int main() {
    int i=30;
    Explaining_pass_by_reference(i);
    cout << i << endl;
    return 0;
}