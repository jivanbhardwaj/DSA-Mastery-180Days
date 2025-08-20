#include <bits/stdc++.h>
using namespace std;
/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

*/

int main() {
int n;
int i,j;

cin>> n;  // Read the height of the pattern
for (i = 1; i <= n; i++) {
    for (j=1; j<= i; j++) {

    if ((i+j) % 2 == 0) {
        cout<< "1 ";
    }
    else {
        cout<< "0 ";
     }
  } 
    cout<<endl; 
 }
   return 0;
} 