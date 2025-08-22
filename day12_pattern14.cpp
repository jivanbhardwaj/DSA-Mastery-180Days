#include <bits/stdc++.h>
using namespace std;
/*

A 
A B 
A B C 
A B C D 
A B C D E 
A B C D E F

*/
int main() {
    char ch='A';
    int i,j,n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(ch='A'; ch<='A'+i-1; ch++) {
            cout<<ch<<" ";
            }
            cout << endl;
        }
        return 0;
    }