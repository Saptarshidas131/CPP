// bidirectional iterator: map, multimap, set, vector, deque, list
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s {1,2,3};
    // print elements of s in forward direction
    for (auto x:s)
        cout << x << " ";
    // print elements of s in backward direction
    set<int> :: reverse_iterator rit;
    for(rit = s.rbegin(); rit != s.rend(); rit++)
        cout << *rit << " ";
    
	return 0;
}

