#include <bits/stdc++.h>
using namespace std;
/*
Pattern 10:
*
**
***
****
*****
****
***
**
*


*/

int main() {
    int n;
    cin >> n;  // Read the height of the pattern

    // Upper half of the pattern    
    for(int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout<< "*";
        }
        cout<<endl;
    }
    // Lower half of the pattern


    for (int i=2; i<=n; i++){
            for(int j=1; j<=n-i+1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    return 0;
}