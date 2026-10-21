#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;    

int main(){
    int arr[5] = {3, 5, 1, 8, 2};
    swap(arr[0], arr[4]); // Swaps first and last elements
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;

    cout << "Min: " << min(arr[0], arr[1]) << endl; // Returns smaller of two values
    cout << "Max: " << max(arr[0], arr[1]) << endl; // Returns larger of two values 

    vector<int> vec = {3, 5, 1, 8, 2};
    cout << "Min: " << *min_element(vec.begin(), vec.end()) << endl; // Returns smallest element in vector
    cout << "Max: " << *max_element(vec.begin(), vec.end()) << endl; // Returns largest element in vector

    return 0;
}

// ---- swap ----
// swaps values of two variables
// int a = 5, b = 10;
// swap(a, b);   // a = 10, b = 5

// ---- min, max ----
// returns smaller/larger of two values
// int x = min(3, 7);   // 3
// int y = max(3, 7);   // 7