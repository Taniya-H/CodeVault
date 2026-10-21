#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n = 7;                 // binary: 111
    cout << __builtin_popcount(n);  // output: 3

    long int l = 15;          // binary: 1111
    cout << __builtin_popcountl(l); // output: 4

    long long m = 15;          // binary: 1111
    cout << __builtin_popcountll(m); // output: 4

    return 0;
}

// ---- Count Set Bits (number of 1s in binary representation) ----
// built-in GCC functions, take unsigned integer types

// __builtin_popcount(x);     // for int / unsigned int
// __builtin_popcountl(x);    // for long / unsigned long
// __builtin_popcountll(x);   // for long long / unsigned long long

