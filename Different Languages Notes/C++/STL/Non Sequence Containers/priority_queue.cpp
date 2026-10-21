#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> q;

    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }

    cout << endl;

    //Reverse Priority Queue 
     priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;

    return 0;
}

// Priority Queue (Heap-based)
// By default -> Max Heap (largest element has highest priority)

// Min Heap
// priority_queue<int, vector<int>, greater<int>> pq;
// Here, greater<int> is a functor (function object) used as the comparison function.
// It makes the smallest element have the highest priority, so top() returns the minimum element.

// push(x);      // Insert element - O(log n)
// emplace(x);   // Construct & insert element - O(log n)
// top();        // Returns highest priority element - O(1)
// pop();        // Removes highest priority element - O(log n)
// size();       // Number of elements - O(1)
// empty();      // Returns true if queue is empty - O(1)

// Max Heap Example:
// push(10), push(30), push(20)
// top() -> 30
// pop() removes 30
// Next top() -> 20

// Min Heap Example:
// push(10), push(30), push(20)
// top() -> 10
// pop() removes 10
// Next top() -> 20

// Complete Binary Tree (CBT)
// - All levels full except possibly the last.
// - Last level is filled from left to right.

// Max Heap
// - CBT where Parent >= Children.
// - Largest element is at the root.
// - Default priority_queue in C++.

// Min Heap
// - CBT where Parent <= Children.
// - Smallest element is at the root.
// - Use: priority_queue<int, vector<int>, greater<int>>

// Priority Queue = Binary Heap (implemented as a CBT)