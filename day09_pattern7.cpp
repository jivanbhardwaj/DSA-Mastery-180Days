#include <bits/stdc++.h>
using namespace std;

/**
 *Prints a centered pyramid pattern of asterisks based on user input.
 *
 * The program reads an integer 'n' from standard input, representing the number of rows.
 * For each row, it prints spaces to center the pyramid, followed by an odd number of asterisks,
 * and then spaces again to maintain symmetry. Each row contains (2*i - 1) asterisks, where 'i' is the current row index.
 * The pattern is printed to the standard output.
 *
 * Example for n = 3:
 *   *  
 *  *** 
 * *****

 */
int main() {
    int n,i,j;
    cin >> n;    
    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            cout << " "; // Print space from the current row index to n
        }
        for(j=1; j<=2*i-1; j++) {
            cout << "*"; // Print asterisks from the current row index to n
        }
        for ( j=1; j <=n-i; j++)
        {
            cout << " "; // Print space from the current row index to n
        }
        
        cout << endl; // Move to the next line after printing asterisks for the current row
    }   
    return 0;
}