#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    list<int> l;

    l.emplace_back(1);
    l.push_back(2);
    l.emplace_front(3);
    l.push_front(5);

    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    l.pop_back();
    l.pop_front();

    return 0;
}

// std::list
// Implemented as a Doubly Linked List.

// Advantages:
// - Dynamic size.
// - Efficient insertion and deletion at any position using an iterator.
// - Efficient insertion and deletion at both the front and back.
// - Elements are NOT stored in contiguous memory.
// - No random access (cannot use l[i]).

// Common Functions:

// push_back()      -> Insert at the end.
// push_front()     -> Insert at the beginning.

// emplace_back()   -> Construct and insert at the end.
// emplace_front()  -> Construct and insert at the beginning.

// pop_back()       -> Remove the last element.
// pop_front()      -> Remove the first element.

// front()          -> Access the first element.        O(1)
// back()           -> Access the last element.         O(1)

// begin()          -> Iterator to the first element.
// end()            -> Iterator one past the last element.

// rbegin()         -> Reverse iterator to the last element.
// rend()           -> Reverse iterator one before the first element.

// size()           -> Number of elements.              O(1) (since C++11)

// empty()          -> Returns true if the list is empty. O(1)

// clear()          -> Removes all elements.           O(n)

// insert()         -> Insert before a given iterator. O(1)

// erase()          -> Remove element(s) at an iterator. O(1)

// remove(value)    -> Removes all occurrences of a value. O(n)

// sort()           -> Sorts the list.                 O(n log n)

// reverse()        -> Reverses the list.              O(n)