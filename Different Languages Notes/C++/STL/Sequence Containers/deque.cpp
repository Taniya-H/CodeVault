#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d = {1, 2, 3, 4, 5};

    for(int val: d){
        cout << val <<" ";
    }
    cout << endl;

    cout << d[2] << endl;
    return 0;
}

// std::deque (Double Ended Queue) 

// deque → A container (std::deque).
// dequeue → An operation meaning "remove from a queue."

// Implemented as multiple contiguous memory blocks.
// Allows fast insertion and deletion at BOTH the front and back.
// Supports random access like a vector.
// Dynamic size.

// Difference between List and Deque

// std::list
// - Implemented as a Doubly Linked List (DLL).
// - Elements are NOT stored contiguously.
// - Random access is NOT possible.
// - Cannot use indexing (l[2] ❌).
// - Fast insertion and deletion anywhere using an iterator.

// std::deque
// - Implemented as a dynamic array of multiple memory blocks.
// - Supports random access.
// - Can use indexing (dq[2] ✅).
// - Fast insertion and deletion at both the front and back.

// Advantages:
// - Fast insertion/deletion at both ends.
// - Random access using [] and at().
// - No need to shift elements when inserting/removing at the front.
// - Better than vector when frequent front operations are needed.
