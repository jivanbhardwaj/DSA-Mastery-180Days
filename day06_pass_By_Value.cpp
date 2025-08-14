#include <bits/stdc++.h>
using namespace std;
void pass_by_value(int x){
    x=x+10;
}
int main() {
    int i =15;
    pass_by_value(i);
    cout<<i;
    
    return 0;
}