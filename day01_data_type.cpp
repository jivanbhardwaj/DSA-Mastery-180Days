#include<bits/stdc++.h>
using namespace std;
int main(){
    //datatype
    int minInt= INT_MIN;
    int maxInt= INT_MAX;
    // int can store -10^9 to 10^9
    // long can store -10^12 t0 10^12
    // long long can store -10^18 to 10^18
    //All above case is system dependent
    long minLong=LONG_MIN;
    long maxLong=LONG_MAX;
    long long maxLLong=LLONG_MAX;
    long long minLLong=LLONG_MIN;
    cout<<minInt<<endl<<maxInt<< endl<<maxLong<<endl<<minLong<<endl<<minLLong<<endl<<maxLLong<<endl;
    float int_float=14.9502859; // float can store till 7 precision after decimal 
    double int_double= 87.0348238453427689; //double can store till 15 precision after decimal
    cout << int_float << endl << int_double<<endl;
    char int_char='p';
    string int_str= "Hello! let us code";
    cout<< int_char <<endl<<int_str<<endl;
    return 0;
}