#include<bits/stdc++.h>
using namespace std;
int main(){
    //datatype
    int int_min= INT_MIN;
    int int_max= INT_MAX;
    // int can store -10^9 to 10^9
    // long can store -10^12 t0 10^12
    // lomg long can store -10^18 to 10^18
    long long_num=LONG_MIN;
    long numlong=LONG_MAX;
    long long ll_max=LLONG_MAX;
    long long ll_min=LLONG_MIN;
    cout<<int_min<<endl<<int_max<< endl<<long_num<<endl<<numlong<<endl<<ll_max<<endl<<ll_min<<endl;
    float int_float=14.9502859; // float can store till 7 precision after decimal 
    double int_double= 87.0348238453427689; //doublw can store till 15 precision after decimal
    cout << int_float << endl << int_double<<endl;
    char int_char='p';
    string int_str= "Hello! let us code";
    cout<< int_char <<endl<<int_str<<endl;
    return 0;
}