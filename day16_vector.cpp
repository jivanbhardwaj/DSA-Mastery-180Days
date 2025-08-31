#include <bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> vec; // Declaration of a vector of integers.
    vec.push_back(10); // Adding elements to the vector.
    vec.push_back(20);
    vec.push_back(30);
    
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

    cout<< vec.front()<<endl; // Accessing the first element of the vector.   
    cout<< vec.back()<<endl; // Accessing the last element of the vector.

}
int main() {
    explainVector();
    return 0;
}