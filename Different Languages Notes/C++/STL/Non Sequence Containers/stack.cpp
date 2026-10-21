#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    cout << "s size before swap: " << s.size() << endl;
    cout << "top = " << s.top() << endl;

    stack<int> s2;

    s2.swap(s);

    cout << "s size after swap: " << s.size() << endl;
    cout << "s2 size affter swap: " << s2.size() << endl;

    while(!s2.empty()){
        cout << s2.top() <<" ";
        s2.pop();
    }
    cout << endl;

    return 0;
}

// std::stack
// Follows the LIFO (Last In, First Out) principle.

// Think of a stack like a pile of plates.
// The last plate you place on top is the first one you remove.

// Common Functions:

// push(x)        -> Inserts an element at the top.
// emplace(args)  -> Constructs an element directly at the top.
// top()          -> Returns the top element.
// pop()          -> Removes the top element.
// size()         -> Returns the number of elements.
// empty()        -> Returns true if the stack is empty.
// swap(s1, s2)   -> Swaps the contents of two stacks.