#include <bits/stdc++.h>
using namespace std;

int main() {
    int dob[8] = {1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998}; //
    cout << &dob << endl; 
    cout << &dob[0] << endl; // Address of the first element of the array (type: int*)
    cout << &dob[1] << endl; // Address of the second element of the array (type: int*)
    cout << &dob[2] << endl;
    cout << dob[0] << endl; // Accessing the first element of the array
    cout << dob[1] << endl; // Accessing the second element of the array    
    cout << dob[2] << endl; // Accessing the third element of the array
    cout << dob[3] << endl; // Accessing the fourth element of the array
    cout << dob[4] << endl; // Accessing the fifth element of the array 
    cout << dob[5] << endl; // Accessing the sixth element of the array
    cout << dob[6] << endl; // Accessing the seventh element of the array
    cout << dob[7] << endl; // Accessing the eighth element of the array
    int *ptr = dob; // Pointer to the first element of the array
    cout << *(ptr+2) << endl; // Address of the third element of the array
    cout << *ptr << endl; // Address of the first element of the array
    cout<<sizeof(dob) << endl; //Size of the entire array in bytes
    
    return 0;
}