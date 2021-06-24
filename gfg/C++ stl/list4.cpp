#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int> l {5,10,20,30,40};
    
    auto it = l.begin();    // point the iterator it to the first element
    it = l.erase(it);   // removes the element at the address pointed by the iterator it
    l.remove(40);   // removes all occurences of 40 from the list
    
    // print the list
    for(int x : l)
        cout << x << " ";
    
    
    list<int> l2 {100,200};
    
    l.merge(l2);   // merges all the elements of two lists l1 and l2 and adds to l1 and removes from l2 (will become empty)
    
    cout << "\n";
    // print list
    for(list<int> :: iterator it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    
    return 0;
}
