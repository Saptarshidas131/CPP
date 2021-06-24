#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l {10,20,30}; // create doubly linked list with 10,20,30
    
    auto it = l.begin();    // returns an iterator to the list l
    it++;   // increment the iterator by 1
    it = l.insert(it,15);   // inserts 15 before the iterator it and returns and iterator
    l.insert(it,2,7);   // inserts 7 ,2 times before iterator it
    cout << l.front() << " " << l.back();   // returns the front and the back element of the list l
    cout << "\n" << l.size() << "\n";   // prints size of the list
    
    // print the list
    for(int x : l)
        cout << x << " ";
    
    return 0;
}
