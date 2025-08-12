/*
    This program reads an initial salary value from user input and then uses a do-while loop
    to increment the salary by 100,000 in each iteration. The updated salary is printed after
    each increment. The loop continues until the salary exceeds 1,200,000.

    Steps:
    1. Read the initial salary from standard input.
    2. Print the current salary.
    3. Increment the salary by 100,000.
    4. Repeat steps 2-3 while the salary is less than or equal to 1,200,000.

    Usage:
    - Input: An integer representing the starting salary.
    - Output: The salary value printed in each iteration until the condition is no longer met.
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int salary;
    cin>> salary; 
    do{
        cout<< salary << endl;
        salary = salary + 100000;
    } while(salary <= 1200000);
    
    return 0;
}   