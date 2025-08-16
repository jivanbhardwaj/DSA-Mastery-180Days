#include <bits/stdc++.h>
using namespace std;

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