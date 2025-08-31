#include <bits/stdc++.h>
using namespace std;
/*
In vector we will explore follwoing
1-initialization
2-push back
3-front back
4-size 
5-swap
6-erase
7-clear

*/
void explainVector(){
    vector<int> vec; // Declaration of a vector of integers.
    vector<int> vec2 = {40, 50, 60}; // Another way to initialize a vector with values.
    vec.push_back(10); // Adding elements to the vector.
    vec.push_back(20);
    vec.push_back(30);
    swap(vec, vec2); // Swapping contents of vec and vec2.
    vec.insert(vec.begin(), 25);
    vec.insert(vec.begin()+2,100); // Inserting 100 at the third position.
    for(int i = 0; i < vec.size(); i++) { // Iterating through the vector.
        cout << vec[i] << " "; // Accessing elements using indexing.
    }
    cout << endl;
    // Below auto will do same thing as what for loop does above
    for(auto i : vec)
    cout << i <<" ";
    cout << endl;



    cout << "Vector size: " << vec.size() << endl; // Getting the size of the vector.
    
    cout << "Vector after pop_back: ";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    for(auto i : vec)
    cout << i <<" ";
    cout << endl;
    cout << "Vector size: " << vec.size() << endl; // Getting the size of the vector.

    vec.pop_back(); // Removing the last element from the vector.

    cout << "Vector after pop_back: ";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    cout << "Vector size after pop_back: " << vec.size() << endl;
    vec.erase(vec.begin()); // Removing the first element from the vector.
    cout << vec.front() << endl; // Accessing the first element of the vector.
    cout << vec.back() << endl; // Accessing the last element of the vector.

}
int main() {
    explainVector();
    return 0;
}