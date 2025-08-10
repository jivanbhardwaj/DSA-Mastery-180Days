#include <bits/stdc++.h>
using namespace std;

int main() {
    // when to use switch case? 
    // when The decision is based on one variable tested against multiple constant values.
int day;
cin>> day;
switch (day){
    case 1:
    cout<< "monday";
    break;
    case 2:
    cout << "Tuesday";
    break;
    case 3:
    cout <<"Wed";
    break;
    case 4:
    cout << "Thrusday";
    break;
    case 5:
    cout << "Friday";
    break;
    case 6:
    cout <<"Saturday";
    break;
    case 7:
    cout << "Sunday";
    break;
}
    return 0;
}