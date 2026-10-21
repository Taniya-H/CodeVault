#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;        


int main(){
    vector<int> vec = {3, 5, 1, 8, 2};

    cout << "Is 5 present in the vector? " << (binary_search(vec.begin(), vec.end(), 5) ? "Yes" : "No") << endl; 

    return 0;
}

// ---- Binary Search ----
// checks whether 'target' EXISTS in range [begin, end)
// returns true/false (NOT the position/index)
// IMPORTANT: range must be SORTED beforehand for correct results
//inary_search(v.begin(), v.end(), target);
// TC: O(log n)
