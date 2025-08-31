#include <bits/stdc++.h>
using namespace std;
/*


Imp- Deque allows insertion and deletion from both ends, making it more flexible than a vector or list.
1- Internally it uses a linked list to store elements, allowing for efficient access and modification from both ends.
2- All other operations are same like vector and list.

*/

int main() {
deque<int> dq; // Declaration of a deque of integers.
    dq.push_back(10); // Adding elements to the back of the deque.
    dq.push_back(20);
    dq.push_front(5); // Adding elements to the front of the deque.

    for (auto i : dq)
        cout << i << " "; // Iterating through the deque and printing elements.

    return 0;
}