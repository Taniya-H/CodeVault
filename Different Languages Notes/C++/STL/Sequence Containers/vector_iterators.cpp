#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Iterator acts like a pointer (not always an actual pointer).

    // vec.begin() returns an iterator pointing to the first element (index 0).
    // *vec.begin() gives the value of the first element.

    // vec.end() returns an iterator pointing ONE POSITION PAST the last element.
    // It DOES NOT point to a valid element.

    // Never dereference vec.end().
    // *vec.end();   // ❌ Undefined Behavior

    vector<int> vec = {1, 2, 3, 4, 5};

    cout << "vec.begin : " << *(vec.begin()) << endl;
    // Iterators -- helps to access directly the memory locations
    vector<int>::iterator it;
    for(it = vec.begin(); it!=vec.end(); it++){
        cout << *(it) << " ";
    }
    cout<< endl;

    // Reverse Iterator
    // vector<int>::reverse_iterator itt;
    // You can also use auto which removes the need to declare the iterator
    for(auto itt = vec.rbegin(); itt!=vec.rend(); itt++){
        cout << *(itt) << " ";
    }
    return 0;
}

