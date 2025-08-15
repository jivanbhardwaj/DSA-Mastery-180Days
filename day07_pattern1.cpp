#include <bits/stdc++.h>
using namespace std;

/*
 * The function uses nested loops to print n rows, each containing 4 asterisks ('*').
 * After printing each row, it moves to the next line.
 *
 * int Returns 0 upon successful completion.
 */
int main() {
    int n;
    cin >> n; // Read the number of rows from input
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
        cout << "*"; // Print a star for each column in the current row
        }
        cout << endl; // Move to the next line after printing stars for the current row
    }

    return 0;
}