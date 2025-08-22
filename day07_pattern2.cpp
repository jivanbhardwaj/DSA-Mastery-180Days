#include <bits/stdc++.h>
using namespace std;

/**

 * This function reads an integer 'n' from standard input and prints a left-aligned 
 * right-angled triangle pattern of asterisks. The triangle has 'n' rows, where the 
 * first row contains one asterisk, the second row contains two, and so on, up to 'n' asterisks 
 * in the last row.
 * 
 * Example (for n = 4):
 * *
 * **
 * ***
 * ****
 */
int main() {
    int i,j,n;
    cin >> n; // Read the number of rows from input
    for(i=1; i<=n; i++) { // Loop to print 8 rows
        for(j=1; j<=i; j++) { // Loop to print 8 asterisks in each row
            cout << "*"; // Print an asterisk
        }
        cout << endl; // Move to the next line after printing 8 asterisks
    }
    return 0;
}