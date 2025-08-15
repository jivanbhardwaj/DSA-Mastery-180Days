#include <bits/stdc++.h>
using namespace std;

/*
 * The function uses nested loops to print 4 rows, each containing 4 asterisks ('*').
 * After printing each row, it moves to the next line.
 *
 * int Returns 0 upon successful completion.
 */
int main() {
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 4; col++) {
        cout << "*"; // Print a star for each column in the current row
        }
        cout << endl; // Move to the next line after printing stars for the current row
    }

    return 0;
}