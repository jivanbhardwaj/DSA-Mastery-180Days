#include <bits/stdc++.h>
using namespace std;

/**
 * Prints a right-angled triangle pattern of numbers with decreasing rows.
 * 
 * The program reads an integer 'n' from standard input and prints 'n' rows.
 * Each row starts with 1 and prints numbers from 1 to (n - i + 1) where 'i' is the current row index.
 * For example, if n = 4, the output will be:
 * 1234
 * 123
 * 12
 * 1
 * 
 */

int main() {
    int n;
    cin >> n; // Read the number of elements in the array
    for(int i=1; i <= n; i++) {
        for(int j = 1; j <= n-i+1; j++) {
            cout << j; // Print asterisks from the current row index to n
        }
        cout << endl; // Move to the next line after printing asterisks for the current row
    }
    return 0;
}