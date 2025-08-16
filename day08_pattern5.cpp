#include <bits/stdc++.h>
using namespace std;

/**
 * Prints a right-angled triangle pattern of asterisks with decreasing rows.
 * 
 * The program reads an integer 'n' from standard input and prints 'n' rows.
 * Each row starts with 'i' (from 1 to n) and prints asterisks from 'i' to 'n'.
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
        for (int j = i; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}