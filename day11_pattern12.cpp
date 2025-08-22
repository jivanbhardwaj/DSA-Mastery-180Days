#include <bits/stdc++.h>
using namespace std;

/*
1          1
12        21
123      321
1234    4321
12345  54321
123456654321

*/
int main() {
    int i,j,n;
    cin >> n;  // Read the height of the pattern
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            cout << j;
        }
        
        for (j=1; j<=(2*n-2*i); j++) // Print spaces
        {
            cout << " ";
        }
        // Print decreasing numbers
        for(j=i; j>= 1; j--) {
            cout << j;
        }
        cout    << endl;
    } 
    
    return 0;
}