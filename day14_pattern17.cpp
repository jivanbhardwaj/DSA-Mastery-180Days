#include <bits/stdc++.h>
using namespace std;
/* 
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA


*/
int main() {
    int n;
    cin >> n;   
        // Outer loop for the number of rows.
        for(int i = 1; i <= n; i++) {
            
            // Printing spaces before characters.
            for(int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            
            // Printing characters.
            char ch = 'A';
            for(int j = 1; j <= 2 * i - 1; j++) {
                cout << ch;
                if(j < i)
                    ch++;
                else
                    ch--;
            }
            
            // Move to the next line for the next row.
            cout << endl;
        }
    }
