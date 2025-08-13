#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Prints each character of the string "Echelonedge" on a new line,
 *        followed by the length of the string.
 *
 * The program initializes a string, calculates its length, and iterates
 * through each character, printing them individually. Finally, it prints
 * the total length of the string.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    string str="Echelonedge";
    int length=str.size();
    for(int i=0; i<=length-1; i++) {
        cout<<str[i]<<endl;
    }
    cout<<length<<endl;
    return 0;
}