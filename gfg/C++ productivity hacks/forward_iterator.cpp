// forward iterator: forward_list, ordered_map, unordered_map
#include <iostream>
#include<forward_list>
using namespace std;

int main()
{
    // single linked list
    forward_list<int> l {1,2,3,4};

    // print list items
    for(auto x:l)
        cout << x << " ";
    
	return 0;
}

