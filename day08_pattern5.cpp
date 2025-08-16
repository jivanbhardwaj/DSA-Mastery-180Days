#include <bits/stdc++.h>
using namespace std;
/**
 * Prints a right-angled triangle pattern of asterisks with decreasing rows.
 * 
 * The program reads an integer 'n' from standard input and prints 'n' rows.
 * Each row contains asterisks, starting from 'n' asterisks in the first row
 * and decreasing by one asterisk in each subsequent row.
 * For example, if n = 4, the output will be:
 * ****
 * ***
 * **
 * *
 */

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}