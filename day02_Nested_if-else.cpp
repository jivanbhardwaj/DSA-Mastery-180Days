#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>=b){
        if (a>=c){
            cout << "a is the largest: " << a;
        }
    }
// In this above case if a greater than b and c then obviously a will be the largest
    else if (b>=c){
            cout << "b is the largest: " << b;
        }
/* In above block there is no need to compare if b is greater than a or not, beacuse from first block it proven that 
if a is not greater than b then b will greater than a and if b is greater than c as well then b will the largest*/
    else{
            cout << "c is the largest: " << c;
        }
// if both above cases is false then c will be the largest.
    }