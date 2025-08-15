#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the number of rows from input
    for(int i = 1; i <= n; i++) { // Loop to print 5 rows
        for(int j = 1; j <= i; j++) { // Loop to print numbers from 1 to i
            cout << i; // Print the current number
        }
        cout << endl; // Move to the next line after printing numbers in the current row
    }
    return 0;
}