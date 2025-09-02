#include <bits/stdc++.h>
using namespace std;
/* 
1-sort
2-accumulate
3-count
4-find
5-comparators
6-next_permutation
7-max_element
8-min_element
9-reverse
10-pow
*/

void explainSort(){
    int arr[5] = {5, 2, 8, 1, 3};
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> vec = {34, 434, 545, 2323, 223};
    sort(vec.begin() + 2, vec.end());
    for (auto i: vec) {
        cout << i << " ";
    }
    cout << endl;
}

void explainAccumulate(){
    vector<int> vec = {1, 2, 3, 4, 5};
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "Sum: " << sum << endl;
}

void explainCount(){
    vector<int> vec = {1, 2, 3, 4, 5, 3, 3};
    cout << count(vec.begin(), vec.end(), 3)<< endl;
}

void explainFind(){
    vector<int> vec = {1, 2, 3, 4, 5};
    auto it = find(vec.begin(), vec.end(), 3);
    if (it != vec.end()) {
        cout << "Found 3 at position: " << distance(vec.begin(), it) << endl;
    } else {
        cout << "3 not found" << endl;
    }
}

void explainComparator(){
    vector<int> vec = {1, 2, 3, 4, 5};
    sort(vec.begin(), vec.end(), greater<int>());
    for (auto i: vec) {
        cout << i << " ";
    }
    cout << endl;
}

void explainNextPermutation(){
    string str = "abc";
 do {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}

int main() {
    // explainSort();
   // explainAccumulate();
   // explainCount();
   // explainFind();
   //explainComparator();
    explainNextPermutation();
    return 0;
}