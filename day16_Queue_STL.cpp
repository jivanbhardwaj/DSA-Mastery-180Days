#include <bits/stdc++.h>
using namespace std;
/*
queue is similar to stack but follows FIFO (First In First Out) order.
*/
void explainQueue() {
    queue<int> q; // Declaration of a queue of integers.
    q.push(18); // Adding elements to the back of the queue.
    q.push(20);
    q.push(39);

    while (!q.empty()) {
        cout << q.front() << " "; // Printing the front element.
        q.pop(); // Removing the front element.
    }
}


int main() {
    
    return 0;
}