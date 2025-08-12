#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Reads a city name from user input and prints it 10 times.
 *
 * The program prompts the user to enter a city name (which may include spaces),
 * then outputs the entered city name to the console 10 times, each on a new line.
 *
 * @return int Returns 0 upon successful completion.
 */
int main() {
    string city;
    int count = 1;
    getline(cin, city); // Read a line of input including spaces
   while(count<=10){
        cout << city << endl; 
        count++;
        
    }
    return 0;
   }