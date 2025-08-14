#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Entry point of the program.
 * 
 * Prompts the user to enter a day number (1-7) and displays the corresponding day of the week.
 * Utilizes a switch-case statement to map the input number to a day name.
 * If the input is not between 1 and 7, displays an error message.
 
 * @return int Returns 0 upon successful execution.
 * when to use switch case? 
 * when The decision is based on one variable tested against multiple constant values.
 */
int main() {
    
int day;
cout << "Enter day (1-7): ";
cin >> day;

    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wed";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day entered. Please enter a number between 1 and 7.";
            break;
    }
    return 0;
}