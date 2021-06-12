// random access iterator: vector, deque
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // declaring a vector v
    vector<int> v {10,20,40};
    // forward iterator itr, declaring and initialising to beginning of v
    vector<int> :: iterator itr = v.begin();
    // print elements of v in forward direction
    for(auto x:v)
        cout << x << " ";
    cout<< endl;
    // reverse iterator rit
    vector<int> :: reverse_iterator rit;
    // print elements of v in reverse direction
    for(rit = v.rbegin(); rit != v.rend(); rit++)
        cout << *rit << " ";
    cout<< endl;
    // printing middle element of v
    cout << v[1];

    return 0;
}
