#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}

// Queue (FIFO - First In, First Out)
// Insertion -> Back
// Deletion -> Front

// q.push(x);      // Insert element at the back - O(1)
// q.emplace(x);   // Constructs element directly at the back - O(1)
// q.front();      // Returns front element (doesn't remove it) - O(1)
// q.back();       // Returns last element - O(1)
// q.pop();        // Removes front element (returns nothing) - O(1)
// q.size();       // Number of elements in the queue - O(1)
// q.empty();      // Returns true if queue is empty - O(1)
// q.swap(q2);     // Swaps contents of two queues - O(1)
