#include<bits/stdc++.h>
using namespace std;
/**
 * @brief Demonstrates usage of various fundamental data types in C++.
 *
 * This program prints the minimum and maximum values for int, long, and long long types,
 * as well as examples of float and double precision. It also shows usage of char and string types.

 * - int: Typically stores values from -2,147,483,648 to 2,147,483,647 (system dependent).
 * - long: Range is system dependent, commonly -2,147,483,648 to 2,147,483,647 or larger.
 * - long long: Can store very large values, up to ±9,223,372,036,854,775,807 (system dependent).
 * - float: Stores decimal numbers with up to 7 digits of precision.
 * - double: Stores decimal numbers with up to 15 digits of precision.
 * - char: Stores a single character.
 * - string: Stores a sequence of characters.
 *
 * The program outputs the values of these variables to demonstrate their ranges and usage.
 */
int main(){
    //datatype
    int minInt= INT_MIN;
    int maxInt= INT_MAX;
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