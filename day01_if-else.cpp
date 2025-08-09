#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
   /* if (age>=18){
        cout << "adult";
    }
    else {
        cout << "teen";
    } 
        */

    if (age>=18){
        cout<<"adult";
    }
    else if (18> age >= 12) {
        cout<<"teen";
    }
    else{
        cout << "chlid";
    }
}