#include <bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> v; // Declaration of a vector of integers.
    v.push_back(10); // Adding elements to the vector.
    v.push_back(20);
    v.push_back(30);
    
    for(int i = 0; i < v.size(); i++) { // Iterating through the vector.
        cout << v[i] << " "; // Accessing elements using indexing.
    }
    cout << endl;
    
    cout << "Vector size: " << v.size() << endl; // Getting the size of the vector.
    
    v.pop_back(); // Removing the last element from the vector.
    
    cout << "Vector after pop_back: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    cout << "Vector size after pop_back: " << v.size() << endl;

}
int main() {
    explainVector();
    return 0;
}