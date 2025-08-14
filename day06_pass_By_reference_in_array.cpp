/*
    This program demonstrates passing arrays by reference in C++.

    - The function `Explaining_pass_by_reference` takes an integer array as a parameter.
    - Inside the function, the first element of the array (`arr[0]`) is modified to 100.
    - In `main`, an integer array `arr` of size 5 is initialized.
    - The array is passed to the function, which modifies its first element.
    - The modified value of `arr[0]` is printed to the console.

    Key Point:
    - Arrays in C++ are passed to functions by reference (as pointers), so modifications inside the function affect the original array.
*/
#include <bits/stdc++.h>
using namespace std;

void Explaining_pass_by_reference(int arr[]){
arr[0] = 100;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    Explaining_pass_by_reference(arr);
    cout<<arr[0] << endl; // Output will be 100
    cout << arr[1] << endl; // Output will be 2
    return 0;
}