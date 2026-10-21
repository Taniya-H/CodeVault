#include <iostream>
#include <set>
using namespace std;

int main(){
    // ===== Set in C++ (STL) =====

    // - Stores unique elements only (no duplicates)
    // - Elements are stored in sorted order automatically
    // - Implemented using a balanced BST (Red-Black Tree)
    // - Most operations: O(log n)

    set<int> s;

    // ---- insert ----
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(1);      // ignored, 10 already exists (no duplicates)

    // ---- emplace ----
    // same as insert, but constructs element in-place (avoids extra copy)
    s.emplace(3);

    for(auto val: s){
        cout << val << " ";
    }
    cout << endl;

    // ---- lower_bound ----
    // returns an iterator to the first element that is NOT LESS than (>=) given value
    // i.e., first element >= x
    // if no such element exists, returns s.end()
    cout << "lower bound = " << *(s.lower_bound(4)) << endl;

    // ---- upper_bound ----
    // returns an iterator to the first element that is STRICTLY GREATER than given value
    // i.e., first element > x
    // if no such element exists, returns s.end()
    // useful since set is always sorted -> O(log n)
    cout << "upper bound = " << *(s.upper_bound(4)) << endl;

    // Note: difference from lower_bound
    // lower_bound(x) -> first element >= x
    // upper_bound(x) -> first element >  x
    // If x exists in the set, [lower_bound(x), upper_bound(x)) gives range of elements equal to x

    // Note: no s[index] or s[key] access -> sets don't support direct indexing
    return 0;
}

