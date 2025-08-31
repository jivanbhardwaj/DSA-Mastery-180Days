#include <bits/stdc++.h>
using namespace std;
/*
List and Vector are almost similar, but there are key differences.
1- List allow insert element from front unlike vector 
2- Vector only allow insert element from back unlike list
*/

void explainList() {
    list<int> ls; // Declaration of a list of integers.
    ls.push_back(10); // Adding elements to the end of the list.
    ls.push_back(98);
    ls.push_front(88);

    for (auto i : ls)
        cout << i << " "; // Iterating through the list and printing elements.

}
int main() {

    explainList();
    
    return 0;
}