#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    multiset<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);

    for(auto val : s) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

// ===== Other Sets in C++ (STL) =====

// ---- Multiset ----
// - Like set, but allows duplicate elements
// - Still stored in sorted order (balanced BST)
// - insert, erase, find, count all work similarly, O(log n)
// - erase(value) removes ALL occurrences of that value
//   to remove only one occurrence: s.erase(s.find(value))

// ---- Unordered Set ----
// - Unique elements only, but NOT sorted (uses hashing internally)
// - random order of elements (order not guaranteed/random -> not sorted)
// - lower bound and uperbound concept does not exists (as the elements are not sorted)
// - O(1) average TC (time complexity) for insert/find/erase
//   but O(n) worst case (due to hash collisions)

// ---- Quick Comparison ----
// set             -> unique, sorted,    O(log n)
// multiset        -> duplicates, sorted, O(log n)
// unordered_set   -> unique, unsorted,  O(1) avg / O(n) worst