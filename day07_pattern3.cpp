#include <bits/stdc++.h>
using namespace std;

/**
 *  Prints a pattern of numbers based on user input.
 * The program reads an integer 'n' from standard input and prints 'n' lines.
 * Each line 'i' contains numbers from 1 to 'i' in increasing order.
 * For example, if n = 3, the output will be:
 * 1
 * 12
 * 123
 * 1234
 * 12345
 */
int main() {
    int n;
    cin >> n; // Read the number of multiplication tables to print
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl; // Print a newline after each table
    }
    return 0;
}