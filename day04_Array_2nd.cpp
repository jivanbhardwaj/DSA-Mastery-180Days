#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Reads 5 integers from standard input into an array and prints each value.
 *
 * The function declares an integer array of size 5. It then iterates over the array,
 * reading an integer from the user for each element and immediately outputs the value.
 *
 * @return int Returns 0 upon successful completion.
 */
int main() {
    int bob[5]; // Array of integers
    for(int i = 0; i <= 4; i++) {
        cin >> bob[i]; // Input each element of the array
        cout << bob[i] << endl;
    }
    return 0;
}