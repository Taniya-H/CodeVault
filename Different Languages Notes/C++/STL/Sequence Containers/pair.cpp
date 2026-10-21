#include <iostream>
#include <vector>
using namespace std;

int main(){
    pair<int, int> p = {3, 5};
    pair<char, int> p1 = {'a', 1};
    
    cout << p.first << endl;
    cout << p.second << endl;
    
    pair<int, pair<char, int>> p2 = {1, {'a',3}};
    cout << p2.first << endl;
    cout << p2.second.first << endl;

    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

    vec.push_back({4,5}); //  -> Inserts an existing object into the vector
    vec.emplace_back(4,5); // Constructs the object directly inside the vector (in-place construction).

    for (pair<int, int> p : vec) {
        cout << p.first << " " << p.second << endl;
    }


    return 0;
}