#include<bits/stdc++.h>
using namespace std;
int main(){
    // this section is about taking input from user
    int num;
    long long sallary;
    char city_first_letter;
    string address;
    double pi;
    cin>>num>>city_first_letter>>pi>>sallary;
    cout<<num<<endl<<city_first_letter<<endl<<pi<<endl<<sallary<<endl;
    //In case string cin does not take more than word as input we use getline.
    // if there is no defined value for any variable then system print any garbage value.
    getline(cin, address);
    cout<<address<<endl;
    return 0;
}