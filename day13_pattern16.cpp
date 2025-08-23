#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,n;
    cin >> n; // Read the number of rows from input 
    char ch='A'; // Starting character
    for(i=0; i<=n-1; i++) { // Loop to print n rows                     
        for(j=0; j<=i; j++) { 
            cout <<char(ch+i); 
        cout << endl;
    }
    return 0;
}