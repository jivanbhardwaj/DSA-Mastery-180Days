#include <bits/stdc++.h>
using namespace std;

void Explaining_pass_by_reference(int &x){
        x=x+50;
    }

int main() {
    int i=30;
    Explaining_pass_by_reference(i);
    cout<<i;
    return 0;
}