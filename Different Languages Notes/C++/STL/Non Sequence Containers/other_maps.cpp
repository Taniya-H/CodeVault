#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    // To delete a single tv value using iterators
    m.erase(m.find("tv"));

    for(auto p:m){
        cout << p.first << " " << p.second << endl;
    }

    unordered_map<string, int> mm;

    mm["tv"] = 100;
    mm["laptop"] = 100;
    mm["headphones"] = 50;
    mm["tablet"] = 120;
    mm["watch"] = 50;

    for(auto p:mm){
        cout << p.first << " " << p.second <<endl;
    }

    return 0;
}

// ===== Other Maps in C++ (STL) =====

// ---- Multimap ----
// - Like map, but allows duplicate keys (multiple values per key)
// - Elements are stored in sorted order (by key), like map
// - Cannot use m[key] to insert/access (no unique key => no single value)
//   Use m.insert({key, value}) instead


// ---- Unordered Map ----
// - Key-value pairs, but NOT sorted (stored using hashing)
// - Faster average time complexity: O(1) for insert/search/delete
//   (vs O(log n) for map/multimap which use balanced BST/RB-tree)
// - Use when order doesn't matter, only fast lookups needed


// ---- Quick Comparison ----
// map            -> unique keys, sorted,      O(log n) 
// multimap       -> duplicate keys, sorted,   O(log n) 
// unordered_map  -> unique keys, unsorted,    O(1) avg 