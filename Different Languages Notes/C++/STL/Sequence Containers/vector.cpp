#include <iostream>
#include <vector>
using namespace std;

int main(){

    // ---------------- vec ----------------
    // size()     -> number of elements currently stored
    // capacity() -> number of elements it can hold before it needs to resize
    vector<int> vec; // size = 0
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    // Note: capacity doesn't always double on every push_back — it only
    // grows (reallocates) when the current capacity is full.
    // The 1 -> 2 -> 4 -> 8 -> 16 pattern is common but not guaranteed
    // by the standard, just how most compilers implement it.
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    // erase(first, last) removes elements in range [first, last)
    // Here it removes only index 1 (value 20) -> vec becomes {10, 30}
    // Erase changes the size of the array but keeps the capacity same.
    vec.erase(vec.begin() + 1, vec.begin() + 2);

    cout << "vec after erase: ";
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

    // Insert function help to insert a value between a array
    vec.insert(vec.begin() + 2, 100);

    // To clear a vector -- vec.clear()
    // Size becomes 0 but the capacity remains the same

    // To check if a vector is empty
    cout << "is empty : " << vec.empty() << endl;
    // Returns 1 is its empty, else 0.

    // ---------------- vec2 ----------------
    vector<int> vec2;
    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);
    vec2.push_back(4);
    vec2.push_back(5);
    vec2.emplace_back(5); // Adds 5 to the end. Similar to push_back but
                                            // constructs the element in place (can be
                                           // more efficient for complex objects).
    vec2.pop_back();      // Removes the last element -> back to {1,2,3,4,5}

    cout << "vec2: ";
    for(int val : vec2){
        cout << val << " ";
    }
    cout << endl;

    cout << "value at 2nd index: " << vec2[2] << " " << vec2.at(2) << endl;
    // operator[] does NOT check bounds (undefined behavior if out of range)
    // .at() DOES check bounds and throws std::out_of_range if invalid
    cout << "first element: " << vec2.front() << endl;
    cout << "last element: " << vec2.back() << endl;

    cout << endl;

    // ---------------- vec3, vec4, vec5 ----------------
    vector<int> vec3 = {1, 2, 3, 4, 5};   // list-initialized, size 5
    vector<int> vec4(5, 100);             // size 5, all elements = 100
    vector<int> vec5(vec4);               // copy constructor, deep copy of vec4

    cout << "vec3: ";
    for(int val : vec3){
        cout << val << " ";
    }
    cout << endl;

    cout << "vec4: ";
    for(int val : vec4){
        cout << val << " ";
    }
    cout << endl;

    cout << "vec5: ";
    for(int val : vec5){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

// Vector Advantage: Can resize dynamically at runtime.

// Time Complexities:
// O(1)  -> size(), capacity(), front(), back(), push_back(), pop_back()
// O(1) amortized -> emplace_back()

// O(n) -> insert(), erase(), clear()

// O(1) -> empty() 