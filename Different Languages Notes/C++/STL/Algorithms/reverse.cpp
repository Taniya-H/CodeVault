#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int arr[5] = {3, 5, 1, 8, 2};
    
    reverse(arr, arr + 5); // Reverses the array in place
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    vector<int> vec = {3, 5, 1, 8, 2};
    reverse(vec.begin(), vec.end()); // Reverses the vector in place
    for(int val : vec){
        cout << val << " ";
    }   
    cout << endl;

    return 0;
}

// ---- Reverse ----
// reverses order of elements in range [begin, end)
// reverse(v.begin(), v.end());
// Example: {1,2,3,4} -> {4,3,2,1}