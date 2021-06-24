#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> l1 = {15,20,30};  // create a singly linked list with elements 15,20,30
    auto it = l1.insert_after(l1.begin(),10); // inserts 10 after the first element, after 15 
    it = l1.insert_after(it,{2,3,5});   // inserts 2,3,5 after 10, 'i''t gives address of the last inserted element
    it = l1.emplace_after(it,40);   // same as insert_after except it is optimized for large objects
    it = l1.erase_after(it);    // erases elements after the iterator it
    
    // print the list
    for(int x : l1)
        cout << x << " ";
    
    cout << l1.empty(); // returns true/false depending on list is empty or not
    l1.reverse(); // reverses the list
    
    cout <<"\n";
    // print the list
    for(int x : l1)
        cout << x << " ";
        
    l1.sort();  // sorts the list in ascending order by default
    
    cout << "\n";
    // print the list
    for(int x : l1)
        cout << x << " ";
    
    forward_list<int> l2 {6,7}; // creates a singly linked list with 6 and 7
    
    l1.merge(l2);   // merge l1 with l2 in l1, works like merge-sort
    
    cout << "\n";
    // print the list
    for(int x : l1)
        cout << x << " ";
        
    l1.clear(); // clears the list
    
    cout << "\n";
    // print the list
    for(int x : l1)
        cout << x << " ";
    // no elements are printed as the list is empty
    
    l2.assign({1,2,2,3,4});   // assigns 1,2,3,4 to the l2
    l2.remove(2);   // removes all occurences of an element
    
    cout << "\n";
    // print the list
    for(int x : l2)
        cout << x << " ";
        
    return 0;
}
