#include <bits/stdc++.h>
using namespace std;
/*

A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG


*/
int main() {
    int i,j,n;
    cin >> n; 
    char ch='A'; 
    for(int i=0; i<=n-1; i++) {                    
        for(int j=0; j<=i; j++) { 
            cout <<char(ch+i); 
        
    }
    cout << endl;
    }
    return 0;
}