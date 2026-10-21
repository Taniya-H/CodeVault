#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(const pair<int,int> &p1, const pair<int,int> &p2){
    if(p1.second < p2.second){
        return true; // If second elements are equal, sort based on first element
    }
    else if(p1.second == p2.second && p1.first < p2.first){
        return true; // If second elements are equal, sort based on first element
    }
    else return false; // Sort based on second element of pair
}

int main(){
    int arr[5] = {3, 5, 1, 8, 2};
    
    //sort(arr, arr + 5); // Sorts in ascending order by default
    sort(arr, arr + 5, greater<int>()); // Sorts in descending order
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    
    vector<int> vec = {3, 5, 1, 8, 2};
    sort(vec.begin(), vec.end());

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    vector<pair<int,int>> vecPair = {{3, 1}, {5, 2}, {1, 3}, {8, 4}, {2, 5}};
    sort(vecPair.begin(), vecPair.end()); // Sorts based on first element of pair
    for(auto p : vecPair){
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
    
    // Custom comparator for sorting pairs based on second element
    sort(vecPair.begin(), vecPair.end(), comparator);
    for(auto p : vecPair){
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}


// ===== Algorithms: Sorting =====

// sort() is from <algorithm> header
// sorts elements in range [start, end) -> start included, end excluded

// ---- Sort array in ascending order (default) ----
// sort(arr, arr+n) -> arr is start pointer, arr+n is end pointer (one past last element)

// ---- Sort array in descending order ----
// sort(arr, arr+n, greater<int>())is a comparator -> sorts in decreasing order

// ---- Sort a vector ----
// v.begin() -> iterator to start
// v.end()   -> iterator to one past last element
// sort(v.begin(), v.end())

// Note: range is [start, end) i.e. "end" itself is NOT included/touched
// arr+n points to one position AFTER the last valid element