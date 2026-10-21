#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25});
    m.emplace("camera", 50);
    m.erase("tv");

    for(auto p:m){
        cout << p.first << " " << p.second <<endl;
    }

    cout << "cout = " << m.count("camera") << endl;
    cout << "cout = " << m["camera"] << endl;

    // find(begin, end, key)
    // Returns an iterator to the key if found.
    // Returns end() iterator if the key is not found.
    if(m.find("camera") != m.end()){
        cout << "found\n";
    }else {
        cout << "not found\n";
    }

    return 0;
}
/* ===================== MAP (STL) =====================

-> Stores data as (key, value) pairs.
-> Syntax:
   map<KeyType, ValueType> m;

Properties:
✔ Keys are UNIQUE.
✔ Values can be duplicated.
✔ Keys are stored in sorted (ascending) order.

Access/Insert/Update:
m[key] = value;
- Inserts if key doesn't exist.
- Updates value if key already exists.

Common Functions:
m.insert({key, value});    // Insert
m.emplace(key, value);     // Efficient insert
m.find(key);               // Returns iterator
m.count(key);              // 1 if exists, else 0
m.erase(key);              // Remove key
m.size();                  // Number of elements
m.empty();                 // Checks if map is empty
m.clear();                 // Deletes all elements

Traversal:
for(auto it : m)
    cout << it.first << " " << it.second;

it.first  -> Key
it.second -> Value

Time Complexity:
Insert : O(log n)
Find   : O(log n)
Erase  : O(log n)
Count  : O(log n)
Access : O(log n)

Implementation:
- Based on Red-Black Tree.

======================================================= */