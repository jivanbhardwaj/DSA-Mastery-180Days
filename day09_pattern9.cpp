#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;  // height of the upper half

    // Upper half
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // stars
        for (int j = 1; j <= 2*i - 1; j++)
            cout << "*";
        cout << "\n";
    }

    // Lower half
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= i - 1; j++)
            cout << " ";
        // stars
        for (int j = 1; j <= 2*(n - i + 1) - 1; j++)
            cout << "*";
        cout << "\n";
    }

    return 0;
}
