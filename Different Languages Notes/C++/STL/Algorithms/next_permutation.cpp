#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;        


int main(){
    string str = "abc";
    next_permutation(str.begin(), str.end());
    cout << str << endl; // Output: acb
    prev_permutation(str.begin(), str.end());
    cout << str << endl; // Output: abc

    return 0;
}

// ---- Next Permutation ----
// rearranges elements into the NEXT lexicographically greater permutation
// if current arrangement is the largest possible, wraps around to smallest (sorted order)
// returns true if a next permutation existed, false if it wrapped around
// next_permutation(v.begin(), v.end());
// Example: {1,2,3} -> {1,3,2}
// To generate all permutations, sort first then loop with do-while:
// sort(v.begin(), v.end());
// do {
//     // use v
// } while(next_permutation(v.begin(), v.end()));