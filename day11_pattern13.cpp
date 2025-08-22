#include <bits/stdc++.h>
using namespace std;

/*
1 
2 3 
4 5 6 
7 8 9 10 

*/

int main() {
    int num=1;
    int i, j, n;
    cin >> n;  // Read the height of the pattern    
    for (i = 1; i <= n; i++) {
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

