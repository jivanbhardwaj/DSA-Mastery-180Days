#include <bits/stdc++.h>
using namespace std;


/*

E 
D E 
C D E 
B C D E 
A B C D E 


*/
int main() {
    int i,n;
    cin >> n;
    char element='A' + n -1;
    for(int i=0; i<=n-1; i++) {                    
        for(char ch =element-i; ch<=element; ch++) { 
            cout <<ch<< " ";
        }
 cout << endl;
    }
    return 0;
}